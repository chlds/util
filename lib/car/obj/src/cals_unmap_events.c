/* **** Notes

Unmap out of the RAM
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_unmap_events(cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto signed i,r;

if(!argp) return(0x00);

ev = (*(CLI_LEAD+(R(event,*argp))));
if(!ev) return(0x00);

*(CLI_LEAD+(R(event,*argp))) = (*(CLI_SI+(R(event,*ev))));

r = embed(0x00,R(b,*ev));
rl(R(b,*ev));
R(b,*ev) = (0x00);

/*
r = embed(0x00,R(w,*ev));
rl(R(w,*ev));
R(w,*ev) = (0x00);
//*/

rl(ev);
ev = (0x00);

return(0x01+(cals_unmap_events(argp)));
}
