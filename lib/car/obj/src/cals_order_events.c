/* **** Notes

Sort
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_order_events(cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto time_t t;
auto signed i,r;

if(!argp) return(0x00);

ev = (*(CLI_INDEX+(R(event,*argp))));
if(!ev) return(0x00);
if(!(*(CLI_DI+(R(event,*ev))))) return(0x00);

if(!(*(CLI_DI+(R(event,**(CLI_DI+(R(event,*ev)))))))) *(CLI_LEAD+(R(event,*argp))) = (ev);
else *(CLI_SI+(R(event,**(CLI_DI+(R(event,**(CLI_DI+(R(event,*ev))))))))) = (ev);
*(CLI_SI+(R(event,**(CLI_DI+(R(event,*ev)))))) = (*(CLI_SI+(R(event,*ev))));
*(CLI_SI+(R(event,*ev))) = (*(CLI_DI+(R(event,*ev))));

if(!(*(CLI_SI+(R(event,**(CLI_SI+(R(event,*ev)))))))) *(CLI_BASE+(R(event,*argp))) = (*(CLI_SI+(R(event,*ev))));
else *(CLI_DI+(R(event,**(CLI_SI+(R(event,**(CLI_SI+(R(event,*ev))))))))) = (*(CLI_SI+(R(event,*ev))));
*(CLI_DI+(R(event,*ev))) = (*(CLI_DI+(R(event,**(CLI_SI+(R(event,*ev)))))));
*(CLI_DI+(R(event,**(CLI_SI+(R(event,*ev)))))) = (ev);

*(CLI_OFFSET+(R(event,*argp))) = (*(CLI_SI+(R(event,*ev))));
*(CLI_INDEX+(R(event,*argp))) = (*(CLI_SI+(R(event,*ev))));

return(0x01);
}
