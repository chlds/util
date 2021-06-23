/* **** Notes

Go for months
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_r_r(signed short(mo),signed(arg),cals_t(*argp))) {

auto signed short secondary = (0x01);
auto signed short primary = (0x00);
auto struct tm *tp;
auto signed short *w;
auto signed char *b;
auto rect_t rect;
auto time_t curr_wk1;
auto time_t curr_t;
auto time_t t;
auto time_t di;
auto signed i,r;
auto signed short curr_yr;
auto signed short curr_mo;
auto signed short curr_di;
auto signed short curr_wk;
auto signed short flag;

if(!argp) return(0x00);
if(!arg) return(0x00);

AND(flag,0x00);
t = (60);
t = (60*(t));
di = (24*(t));

t = (*(CLI_INDEX+(R(t,*argp))));
*(CLI_OFFSET+(R(t,*argp))) = (t);
tp = localtime(&t);
if(!tp) return(0x00);

curr_yr = (1900+(R(tm_year,*tp)));
curr_mo = (R(tm_mon,*tp));
curr_di = (R(tm_mday,*tp));
curr_t = (t);
if(!(curr_mo^(*(THELAST+(R(month,*argp)))))) {
t = (curr_t+(di*(-0x01+(DAYS))));
tp = localtime(&t);
if(!tp) return(0x00);
curr_mo = (R(tm_mon,*tp));
if(!(curr_mo^(*(THEFIRST+(R(month,*argp)))))) {
// if a week starts with Monday,
if(0x03<(R(tm_mday,*tp))) *(CLI_INDEX+(R(wk1,*argp))) = (curr_t);
}}

// also restore the tp for curr_t.
tp = localtime(&curr_t);
if(!tp) return(0x00);

curr_mo = (R(tm_mon,*tp));
if(curr_mo^(mo)) {
if(!(--arg)) return(0x00);
mo = (curr_mo);
// r = (COL_R);
r = cals_display_mo_yr(mo,1900+(R(tm_year,*tp)),argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_display_mo_yr()");
return(0x00);
}
// nearby
r = cals_refer_events(primary,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_refer_events()");
return(0x00);
}
// on calendar week 1
if(!(curr_mo^(*(THEFIRST+(R(month,*argp)))))) {
curr_wk1 = (*(CLI_INDEX+(R(wk1,*argp))));
if(!(curr_wk1^(*(CLI_OFFSET+(R(wk1,*argp)))))) *(CLI_INDEX+(R(wk1,*argp))) = (curr_t);
*(CLI_OFFSET+(R(wk1,*argp))) = (*(CLI_INDEX+(R(wk1,*argp))));
}}

// calendar weeks
printf("\t%s %d, ","CW",ct_weeks(*(CLI_INDEX+(R(wk1,*argp))),curr_t));

// restore the tp for curr_t.
tp = localtime(&curr_t);
if(!tp) return(0x00);

printf("\t%s %d - ",*(MONTH+(R(tm_mon,*tp))),R(tm_mday,*tp));

ADD(curr_t,di*(-0x01+(DAYS)));
*(CLI_INDEX+(R(t,*argp))) = (curr_t);

tp = localtime(&curr_t);
if(!tp) return(0x00);
if(curr_mo^(R(tm_mon,*tp))) printf("%s ",*(MONTH+(R(tm_mon,*tp))));

printf("%d ",R(tm_mday,*tp));
if(!(CALS_NONLOADING&(R(flag,*argp)))) {
if(CALS_BOUND&(R(flag,R(roll,*argp)))) {
r = cals_count_scheduled_events(&i,*(CLI_OFFSET+(R(t,*argp))),&(R(roll,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cals_count_scheduled_events()");
return(0x00);
}
if(i) {
b = ("events");
if(!(0x01^(i))) b = ("event");
printf("(%d %s) ",i,b);
}}}

printf("\n");

r = cals_refer_events(secondary,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_refer_events()");
return(0x00);
}

ADD(curr_t,di);
*(CLI_INDEX+(R(t,*argp))) = (curr_t);

return(0x01+(cals_r_r(mo,arg,argp)));
}
