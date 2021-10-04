/* **** Notes

Display events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_events_r_r(time_t(*prev),cals_event_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short wk,di,mo,yr;
auto signed short hr;
auto signed short cols;
auto signed short colors;
auto signed short flag;
auto rect_t rect;
auto signed delay = (0x00);
auto signed char sym[] = {
('\n'),
(0x00),
};

if(!prev) return(0x00);
if(!argp) return(0x00);

// update day of the week for periodic events
if(CALS_PERIODIC&(R(flag,*argp))) {
t = (R(t,*argp));
tp = localtime(&t);
if(!tp) return(0x00);
*(CALS_WK+(R(date,*argp))) = (R(tm_wday,*tp));
*(CALS_DI+(R(date,*argp))) = (R(tm_mday,*tp));
}

yr = (*(CALS_YR+(R(date,*argp))));
mo = (*(CALS_MO+(R(date,*argp))));
di = (*(CALS_DI+(R(date,*argp))));
wk = (*(CALS_WK+(R(date,*argp))));

AND(flag,0x00);
t = (*prev);
*prev = (R(t,*argp));
if(cals_event_in_the_day(t,argp)) OR(flag,0x01);

// display only once on duplicate days
// column of the left
if(!flag) printf(" %2d %s ",*(CALS_DI+(R(date,*argp))),*(CAPS_DAYOFTHEWK+(*(CALS_WK+(R(date,*argp))))));
else printf("\t");

colors = (R(colors,*argp));
if(CALS_APERIODIC&(R(periodic,*argp))) AND(colors,0x00);
if(colors) {
if(!(color_text(0xFF&(colors),0xFF&(colors>>(0x08))))) {
if(DBG) printf("%s \n","<< Error at fn. color_text()");
}}

// also
if(CALS_TIME_ALLDAY&(R(flag,*argp))) printf("%s ","All-day");
if(!(CALS_TIME_ALLDAY&(R(flag,*argp)))) {
hr = (*(CALS_HR+(R(time,*argp))));
b = ("%2d:%02d   ");
if(CALS_MERIDIEM&(R(flag,*argp))) {
b = ("%2d:%02dam ");
if(!(hr<(12))) b = ("%2d:%02dpm ");
hr = (hr%(12));
}
printf(b,hr,*(CALS_MN+(R(time,*argp))));
}

if(colors) {
if(!(color_text(COLOR_RESET,COLOR_BG_RESET))) {
if(DBG) printf("%s \n","<< Error at fn. color_text()");
}}

// column of the right
b = (R(b,*argp));
// r = cli_outs(b);
if(!(rect_beta(CLI_IN,CLI_RULE,&rect))) return(0x00);
cols = (*(CLI_BASE+(R(right,rect))));
cols = (cols+(0x01+(~(0x03*(0x08)))));
colors = (R(colors,*argp));
if(CALS_APERIODIC&(R(periodic,*argp))) AND(colors,0x00);
r = cals_output(delay,colors,cols,sym,b);
if(!r) return(0x00);
if(DBG) {
printf("[");
printf("%d-%s-%d ",*(CALS_YR+(R(date,*argp))),*(MON+(*(CALS_MO+(R(date,*argp))))),*(CALS_DI+(R(date,*argp))));
printf("%s ",*(DAYOFTHEWK+(*(CALS_WK+(R(date,*argp))))));
printf("%2d:%02d:%02d",*(CALS_HR+(R(time,*argp))),*(CALS_MN+(R(time,*argp))),*(CALS_SM+(R(time,*argp))));
printf("] ");
}
// if(!(cli_es(CTRL_K))) return(0x00);
if(DBG) {
t = (R(t,*argp));
printf("[t: %lld] ",t);
tp = localtime(&t);
if(!tp) return(0x00);
printf("[%d-%s-%d %s ",1900+(R(tm_year,*tp)),*(MON+(R(tm_mon,*tp))),R(tm_mday,*tp),*(DAYOFTHEWK+(R(tm_wday,*tp))));
printf("%d:%02d:%02d] ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
}

return(0x01);
}
