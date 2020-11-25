/* **** Notes

Display events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_events(cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

event = (*(CLI_LEAD+(R(event,*argp))));
if(!event) return(0x00);

AND(flag,0x00);

r = cals_display_events_r(flag,event);

return(r);
}
