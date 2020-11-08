/* **** Notes

Unmap out of the RAM
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_unbind_events(cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_t *event;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cals_unmap_events(argp);

event = (*(CLI_LEAD+(R(event,*argp))));
i = (CALS_OBJS);
while(i) *(--i+(R(event,*argp))) = event;

return(r);
}
