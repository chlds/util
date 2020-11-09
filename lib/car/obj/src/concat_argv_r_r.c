/* **** Notes

Concatenate
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl concat_argv_r_r(signed(*di),signed char(**si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) return(0x00);

r = ct(*si);
r++;
*di = (r+(*di));
si++;

return(0x01+(concat_argv_r_r(di,si)));
}
