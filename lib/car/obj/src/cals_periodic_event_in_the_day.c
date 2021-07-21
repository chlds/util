/* **** Notes

Refer
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_periodic_event_in_the_day(time_t(arg),cals_event_t(*argp))) {

auto signed i,r;
auto signed short periodic;
auto signed(__cdecl*f)(time_t(arg),cals_event_t(*argp));
auto signed(__cdecl*(fn[]))(time_t(arg),cals_event_t(*argp)) = {
(cals_annual_event_in_the_day),
(cals_monthly_event_in_the_day),
(cals_weekly_event_in_the_day),
(cals_daily_event_in_the_day),
0x00,
};
auto signed short filter[] = {
CALS_ANNUAL,
CALS_MONTHLY,
CALS_WEEKLY,
CALS_DAILY,
0x00,
};

if(!argp) return(0x00);

if(!(CALS_PERIODIC&(R(flag,*argp)))) return(0x00);

periodic = (R(periodic,*argp));
AND(i,0x00);
while(*(i+(filter))) {
if(periodic&(*(i+(filter)))) break;
i++;
}
if(!(*(i+(filter)))) return(0x00);

f = (*(i+(fn)));

return(f(arg,argp));
}
