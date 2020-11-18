/* **** Notes

Unmap out of the RAM
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl cals_remove_cached_events_r(cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*(CLI_LEAD+(R(event,*argp))))) return(0x00);

event = (*(CLI_LEAD+(R(event,*argp))));
*(CLI_LEAD+(R(event,*argp))) = (R(s,*event));

R(w,*event) = (0x00);
R(b,*event) = (0x00);
R(t,*event) = (0x00);
R(flag,*event) = (0x00);

i = (CALS_DATE);
while(i) *(--i+(R(date,*event))) = (0x00);

i = (CALS_TIME);
while(i) *(--i+(R(time,*event))) = (0x00);

free(event);
event = (0x00);

return(0x01+(cals_remove_cached_events_r(argp)));
}
