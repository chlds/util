/* **** Notes

Compare strings.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cmpr_r(signed(*cache),signed char(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char c;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) {
*cache = (signed) (*di);
return(0x00);
}

c = (*di);
if(c^(*si)) {
*cache = (signed) (c+(0x01+(~(*si))));
return(0x00);
}

di++;
si++;

return(0x01+(cmpr_r(cache,di,si)));
}
