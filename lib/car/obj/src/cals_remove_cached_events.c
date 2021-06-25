/* **** Notes

Unmap out of the RAM
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_remove_cached_events(cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto signed i,r;

if(!argp) return(0x00);

r = cals_remove_cached_events_r(argp);

ev = (*(CLI_LEAD+(R(event,*argp))));
i = (CALS_OBJS);
while(i) *(--i+(R(event,*argp))) = ev;

return(r);
}
