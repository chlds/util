/* **** Notes

Count periodic events scheduled for a week.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"


//* Currently under construction
signed(__cdecl cals_count_scheduled_monthly_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp))) {
return(0x01);
}
signed(__cdecl cals_count_scheduled_weekly_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp))) {
return(0x01);
}
signed(__cdecl cals_count_scheduled_daily_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp))) {
return(0x01);
}
//*/


signed(__cdecl cals_count_scheduled_periodic_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(__cdecl *(periodic_f[])) (signed(*cache),cals_event_t(*term),cals_event_t(*argp)) = {
(cals_count_scheduled_annual_events),
(cals_count_scheduled_monthly_events),
(cals_count_scheduled_weekly_events),
(cals_count_scheduled_daily_events),
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

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!term) return(0x00);
if(!argp) return(0x00);

if(!(CALS_PERIODIC&(R(flag,*argp)))) return(0x00);

periodic = (R(periodic,*argp));
i = (0x00);
while(*(filter+(i))) {
if(periodic&(*(filter+(i)))) break;
i++;
}
if(!(*(filter+(i)))) return(0x00);

r = (*(periodic_f+(i))) (cache,term,argp);

return(r);
}
