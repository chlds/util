/* **** Notes

Compare strings.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpr_w_r(signed(*cache),signed short(*di),signed short(*si))) {
auto signed short c;
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
return(0x01+(cmpr_w_r(cache,di,si)));
}
