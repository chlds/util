/* **** Notes

Compare ones in case sensitive character strings.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpr_part_r(signed(*cache),signed char(*di),signed char(*si))) {
auto signed r;
auto signed char c;
if(!cache) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) {
*cache = (0x00);
return(0x00);
}
c = (*di);
if(!c) return(0x00);
if(!(c^(*si))) {
r = cmpr_partially(cache,di,si);
if(!(*cache)) return(r);
}
di++;
return(0x01+(cmpr_part_r(cache,di,si)));
}
