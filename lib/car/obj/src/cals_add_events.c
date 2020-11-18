/* **** Notes

Add
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_add_events(signed char(*content),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed i,r;

/* **** CODE/TEXT */
if(!content) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

r = cals_bind_events(argp);
if(!r) return(0x00);

r = cals_sched_events(content,argp);
if(!r) return(0x00);

return(0x01);
}
