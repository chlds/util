/* **** Notes

Sort
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_sort_events_r_r(signed(arg),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto time_t t;
auto signed i,r;

/* **** CODE/TEXT */
if(!arg) return(0x00);
if(!argp) return(0x00);

event = (*(CLI_INDEX+(R(event,*argp))));
if(!event) return(0x00);
*(CLI_INDEX+(R(event,*argp))) = (R(s,*event));

t = (R(t,*event));
if(!(t<(R(t,**(CLI_INDEX+(R(event,*argp))))))) {
r = cals_order_events(argp);
if(!r) return(0x00);
}

return(0x01+(cals_sort_events_r_r(--arg,argp)));
}
