/* **** Notes

Display events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_events(cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *ev;
auto time_t t;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

ev = (*(CLI_LEAD+(R(event,*argp))));
if(!ev) return(0x00);

// AND(flag,0x00);
t = (0x00);
r = cals_display_events_r(t,ev);

return(r);
}
