/* **** Notes

Unmap out of the RAM
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_remove_cached_events_r(cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto signed i,r;

if(!argp) return(0x00);

ev = (*(CLI_LEAD+(R(event,*argp))));
if(!ev) return(0x00);

*(CLI_LEAD+(R(event,*argp))) = (*(CLI_SI+(R(event,*ev))));

R(w,*ev) = (0x00);
R(b,*ev) = (0x00);
AND(R(t,*ev),0x00);
AND(R(flag,*ev),0x00);

i = (CALS_DATE);
while(i) *(--i+(R(date,*ev))) = (0x00);

i = (CALS_TIME);
while(i) *(--i+(R(time,*ev))) = (0x00);

rl(ev);
ev = (0x00);

return(0x01+(cals_remove_cached_events_r(argp)));
}
