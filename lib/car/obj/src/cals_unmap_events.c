/* **** Notes

Unmap out of the RAM
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl cals_unmap_events(cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*(CLI_LEAD+(R(event,*argp))))) return(0x00);

event = (*(CLI_LEAD+(R(event,*argp))));
*(CLI_LEAD+(R(event,*argp))) = (R(s,*event));

r = embed(0x00,R(b,*event));
free(R(b,*event));
R(b,*event) = (0x00);

/*
r = embed(0x00,R(w,*event));
free(R(w,*event));
R(w,*event) = (0x00);
//*/

free(event);
event = (0x00);

return(0x01+(cals_unmap_events(argp)));
}
