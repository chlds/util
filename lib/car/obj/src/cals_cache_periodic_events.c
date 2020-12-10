/* **** Notes

Cache
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_periodic_events(signed short(n),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto time_t t[0x02];
auto signed i,r;

/* **** CODE/TEXT */
if(n<(0x00)) return(0x00);
if(!n) return(0x00);
if(!cache) return(0x00);
if(!cached) return(0x00);
if(!argp) return(0x00);

*(0x01+(t)) = (*(CLI_LEAD+(R(t,*argp))));
*t = (*(CLI_OFFSET+(R(t,*argp))));
*(CLI_LEAD+(R(t,*argp))) = (*t);
r = cals_cache_periodic_events_r(n,cache,cached,argp);
*(CLI_LEAD+(R(t,*argp))) = (*(0x01+(t)));
i = (0x02);
while(i) *(--i+(t)) = (0x00);

return(r);
}
