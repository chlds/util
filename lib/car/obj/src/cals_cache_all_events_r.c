/* **** Notes

Cache all events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_all_events_r(cals_roll_t(**di),cals_roll_t(**si))) {

auto cals_event_t *ev;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(!(*di)) return(0x00);

if(!(CALS_INIT&(R(flag,**di)))) return(0x00);
if(!(CALS_INIT&(R(flag,**si)))) return(0x00);

ev = (*(CLI_LEAD+(R(event,**si))));
r = cals_cache_all_events_r_r(ev,*di);
si++;

return(r+(cals_cache_all_events_r(di,si)));
}
