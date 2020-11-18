/* **** Notes

Cache
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_events(cals_event_t(cache),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

r = cals_bind_events(argp);
if(!r) return(0x00);

r = cals_copy_events(*(CLI_INDEX+(R(event,*argp))),cache);
if(!r) return(0x00);

return(0x01);
}
