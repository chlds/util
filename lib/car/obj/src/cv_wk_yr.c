/* **** Notes

Convert into second minutes for Calendar Week 1.
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_wk_yr(signed short(day_thefirst),signed short(month_thefirst),time_t(*di),time_t(si))) {

auto struct tm *tp;
auto time_t t;
auto signed h,d,r;

if(day_thefirst<(SUNDAY)) return(0x00);
if(SATURDAY<(day_thefirst)) return(0x00);
if(month_thefirst<(JANUARY)) return(0x00);
if(DECEMBER<(month_thefirst)) return(0x00);
if(!di) return(0x00);
// if(!si) return(0x00);

// check calendar week 1
h = (60*(60));
d = (24*(h));

*di = (0x00);
t = (si);

r = cv_mo_yr(month_thefirst,&t,t);
if(!r) {
printf("%s \n","<< Error at fn. cv_mo_yr()");
return(0x00);
}

r = cv_wk_mo(day_thefirst,&t,t);
if(!r) {
printf("%s \n","<< Error at fn. cv_wk_mo()");
return(0x00);
}

tp = localtime(&t);
if(!tp) return(0x00);

// if a week starts with Monday,
if(0x04<(R(tm_mday,*tp))) t = (t+(-0x01*(d*(DAYS))));
*di = (t);

return(0x01);
}
