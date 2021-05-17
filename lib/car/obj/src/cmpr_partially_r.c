/* **** Notes

Partially compare strings
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cmpr_partially_r(signed(*cache),signed char(*di),signed char(*si))) {

auto signed char c;

if(!cache) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) {
*cache = (0x00);
return(0x00);
}

c = (*di);
if(c^(*si)) {
*cache = (signed) (c+(0x01+(~(*si))));
return(0x00);
}

di++;
si++;

return(0x01+(cmpr_partially_r(cache,di,si)));
}
