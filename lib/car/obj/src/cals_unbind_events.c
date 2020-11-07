/* **** Notes

Unmap out of the RAM
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_unbind_events(cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cals_unmap_events(argp);

return(r);
}
