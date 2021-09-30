/* **** Notes

Cache events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_all_events_r_r(cals_event_t(*cache),cals_roll_t(*argp))) {

auto signed i,r;

if(!cache) return(0x00);
if(!argp) return(0x00);

r = cals_cache_events(cache,argp);
if(!r) return(0x00);

cache = (*(CLI_SI+(R(event,*cache))));

return(0x01+(cals_cache_all_events_r_r(cache,argp)));
}
