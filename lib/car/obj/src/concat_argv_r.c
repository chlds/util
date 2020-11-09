/* **** Notes

Concatenate
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl concat_argv_r(signed(*di),signed char(**si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) return(0x00);

*di = (0x00);

r = concat_argv_r_r(di,si);

return(r);
}
