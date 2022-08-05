/* **** Notes

Display upcoming events or..
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_upcoming_events_r_r(time_t(criterion),cals_event_t(*argp))) {

auto signed char *(b[OBJS]);
auto cals_event_t *ev;
auto time_t hr,mn;
auto time_t t;
auto signed i,r;
auto signed short flag;
auto signed short colors;
auto signed short cols;
auto rect_t rect;
auto signed delay = (0x00);
auto signed char sym[] = {
LF,0x00,
};

if(!argp) return(0x00);

r = init_v_b(0x00,CLI_RULE,b);
if(!r) {
printf("%s \n","<< Error at fn. init_v_b()");
return(0x00);
}

AND(flag,0x00);
t = (R(t,*argp));
if(!(t<(criterion))) {
if(!(CALS_TIME_ALLDAY&(R(flag,*argp)))) {
hr = (*(CALS_HR+(R(time,*argp))));
*b = ("%2d:%02d   ");
if(CALS_MERIDIEM&(R(flag,*argp))) {
*b = ("%2d:%02dam ");
if(!(hr<(12))) *b = ("%2d:%02dpm ");
hr = (hr%(12));
if(!hr) hr = (12);
}
printf("\t");
printf(*b,hr,*(CALS_MN+(R(time,*argp))));
// column right
*b = (0x00);
r = cat_b(b,R(b,*argp),(" "),(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}
// r = cli_outs(b);
if(!(rect_beta(CLI_IN,CLI_RULE,&rect))) return(0x00);
cols = (*(CLI_BASE+(R(right,rect))));
cols = (cols+(0x01+(~(0x03*(0x08)))));
colors = (R(colors,*argp));
// also
t = (criterion);
t = (-t+(R(t,*argp)));
t = (t/(60));
if(t<(60)) {
r = (signed) (t);
r = cv_d(0x0A,CALS_MN+(b),r);
r = cat_b(b,("("),("in about "),*(CALS_MN+(b)),("min."),(")"),(void*)0x00);
}
else {
mn = (t%(60));
hr = (t/(60));
r = (signed) (mn);
r = cv_d(0x0A,CALS_MN+(b),r);
r = (signed) (hr);
r = cv_d(0x0A,CALS_HR+(b),r);
r = cat_b(b,("("),("in about "),*(CALS_HR+(b)),("h. "),*(CALS_MN+(b)),("min."),(")"),(void*)0x00);
}
r = cals_output(delay,colors,cols,sym,*b);
if(!r) OR(flag,0x01);
printf("\n");
}}

r = init_v_b(0x01,CLI_RULE,b);
if(!r) {
printf("%s \n","<< Error at fn. init_v_b()");
return(0x00);
}

argp = (*(CLI_SI+(R(event,*argp))));

if(flag) return(0x00);

return(0x01+(cals_display_upcoming_events_r_r(criterion,argp)));
}
