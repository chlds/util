/* **** Notes

Sort
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_order_events(cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto time_t t;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

event = (*(CLI_INDEX+(R(event,*argp))));
if(!event) return(0x00);
if(!(R(d,*event))) return(0x00);

if(!(R(d,*(R(d,*event))))) *(CLI_LEAD+(R(event,*argp))) = (event);
else R(s,*(R(d,*(R(d,*event))))) = (event);
R(s,*(R(d,*event))) = (R(s,*event));
R(s,*event) = (R(d,*event));

if(!(R(s,*(R(s,*event))))) *(CLI_BASE+(R(event,*argp))) = (R(s,*event));
else R(d,*(R(s,*(R(s,*event))))) = (R(s,*event));
R(d,*event) = (R(d,*(R(s,*event))));
R(d,*(R(s,*event))) = (event);

*(CLI_OFFSET+(R(event,*argp))) = (R(s,*event));
*(CLI_INDEX+(R(event,*argp))) = (R(s,*event));

return(0x01);
}
