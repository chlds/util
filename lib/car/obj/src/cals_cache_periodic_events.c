/* **** Notes

Cache
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_periodic_events(signed short(n),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {

auto signed i,r;

if(n<(0x00)) return(0x00);
if(!n) return(0x00);
if(!cache) return(0x00);
if(!cached) return(0x00);
if(!argp) return(0x00);

r = cals_cache_periodic_events_r(n,cache,cached,argp);

return(r);
}
