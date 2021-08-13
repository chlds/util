/* **** Notes

Refer
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_periodic_events(signed short(arg),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {

auto signed i,r;
auto signed short flag;
auto signed short periodic;
auto signed(__cdecl*f)(signed short(arg),cals_event_t(*cache),cals_t(*argp));
auto signed(__cdecl*(fn[]))(signed short(arg),cals_event_t(*cache),cals_t(*argp)) = {
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
r = f(arg,cache,argp);
if(r) {
r = cals_cache_periodic_events(r,cache,cached,argp);
if(!r) printf("%s \n","<< Error at fn. cals_cache_periodic_events()");
}

if(CALS_EOM&(R(flag,*cache))) {
flag = (~CALS_EOM);
AND(R(flag,*cache),flag);
}

return(r);
}
