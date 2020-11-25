/* **** Notes

Sort
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_sort_events(cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

r = cals_count_events(argp);
if(!r) return(0x00);

r = cals_sort_events_r(r,argp);

return(r);
}
