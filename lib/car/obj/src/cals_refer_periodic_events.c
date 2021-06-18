/* **** Notes

Refer
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"


//* Currently under construction
signed(__cdecl cals_refer_monthly_events(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {
return(0x01);
}
signed(__cdecl cals_refer_weekly_events(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {
return(0x01);
}
signed(__cdecl cals_refer_daily_events(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {
return(0x01);
}
//*/


signed(__cdecl cals_refer_periodic_events(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {

auto signed(__cdecl*f)(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp));
auto signed(__cdecl*(fn[]))(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp)) = {
(cals_refer_annual_events),
(cals_refer_monthly_events),
(cals_refer_weekly_events),
(cals_refer_daily_events),
0x00,
};

auto signed short filter[] = {
CALS_ANNUAL,
CALS_MONTHLY,
CALS_WEEKLY,
CALS_DAILY,
0x00,
};

auto signed i,r;
auto signed short periodic;

if(!cache) return(0x00);
if(!cached) return(0x00);
if(!argp) return(0x00);

if(!(CALS_PERIODIC&(R(flag,*cache)))) return(0x00);

periodic = (R(periodic,*cache));
AND(i,0x00);
while(*(i+(filter))) {
if(periodic&(*(i+(filter)))) break;
i++;
}
if(!(*(i+(filter)))) return(0x00);

f = (*(i+(fn)));
r = f(flag,cache,cached,argp);

return(r);
}
