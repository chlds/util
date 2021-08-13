/* **** Notes

Cache
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_periodic_events_r(signed short(n),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;

auto cals_roll_t roll;
auto time_t t;
auto signed i,r;
auto signed short mo,di,yr;
auto signed short wk;
auto signed short hr,mn;
auto signed short day;

if(n<(0x00)) return(0x00);
if(!n) return(0x00);
if(!cache) return(0x00);
if(!cached) return(0x00);
if(!argp) return(0x00);

r = cals_cache_events(cache,cached);
if(!r) {
printf("%s \n","<< Error at fn. cals_cache_events()");
return(0x00);
}

// overwrite the time after caching events
ev = (*(CLI_INDEX+(R(event,*cached))));
r = cals_update_time_for_periodic_events(n,ev,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_update_time_for_periodic_events()");
return(0x00);
}

return(0x01+(cals_cache_periodic_events_r(--n,cache,cached,argp)));
}
