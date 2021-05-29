/* **** Notes

Display events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_events_r(time_t(prev),cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *ev;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short yr,mo,di;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CALS_INVALID&(R(flag,*argp)))) {
// update day of the week for periodic events
if(CALS_PERIODIC&(R(flag,*argp))) {
t = (R(t,*argp));
tp = localtime(&t);
if(!tp) return(0x00);
*(CALS_WK+(R(date,*argp))) = (R(tm_wday,*tp));
}
AND(flag,0x00);
yr = (*(CALS_YR+(R(date,*argp))));
mo = (*(CALS_MO+(R(date,*argp))));
di = (*(CALS_DI+(R(date,*argp))));
t = (prev);
prev = (R(t,*argp));
tp = localtime(&t);
if(!tp) return(0x00);
if(!(yr^(1900+(R(tm_year,*tp))))) {
if(!(mo^(R(tm_mon,*tp)))) {
if(!(di^(R(tm_mday,*tp)))) flag++;
}}
// display only once on duplicate days
// column of the left
if(!flag) printf(" %2d %s ",*(CALS_DI+(R(date,*argp))),*(CAPS_DAYOFTHEWK+(*(CALS_WK+(R(date,*argp))))));
else printf("\t");
printf("%2d:%02d ",*(CALS_HR+(R(time,*argp))),*(CALS_MN+(R(time,*argp))));
printf("  ");
// column of the right
if(CALS_TIME_ALLDAY&(R(flag,*argp))) printf("%s ","[ALL-DAY]");
r = cli_outs(R(b,*argp));
if(!r) return(0x00);
printf(" ");
if(DBG) {
t = (R(t,*argp));
printf("[t: %lld] ",t);
tp = localtime(&t);
if(!tp) return(0x00);
printf("[%d-%s-%d %s ",1900+(R(tm_year,*tp)),*(MON+(R(tm_mon,*tp))),R(tm_mday,*tp),*(DAYOFTHEWK+(R(tm_wday,*tp))));
printf("%d:%02d:%02d] ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
}
printf("\n");
}

argp = (R(s,*argp));

return(0x01+(cals_display_events_r(prev,argp)));
}
