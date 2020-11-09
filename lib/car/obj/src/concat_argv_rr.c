/* **** Notes

Concatenate
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl concat_argv_rr(signed char(*di),signed char(**si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) return(0x00);

r = cpy(di,*si);
if(!r) return(0x00);

di = (r+(di));

si++;
if(*si) {
*di = (' ');
di++;
}

return(0x01+(concat_argv_rr(di,si)));
}
