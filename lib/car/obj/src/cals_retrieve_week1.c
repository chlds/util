/* **** Notes

Initialise
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_retrieve_week1(signed short(day_thefirst),signed short(month_thefirst),time_t(*di),time_t(si))) {

/* **** DATA, BSS and STACK */
auto struct tm *tp;
auto time_t t;
auto signed h,d,r;

/* **** CODE/TEXT */
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

r = find_a_first_month(month_thefirst,&t,t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_month()");
return(0x00);
}

r = find_a_first_week(day_thefirst,&t,t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_week()");
return(0x00);
}

tp = localtime(&t);
if(!tp) return(0x00);

// if a week starts with Monday,
if(0x04<(R(tm_mday,*tp))) t = (t+(-0x01*(d*(DAYS))));
*di = (t);

return(0x01);
}
