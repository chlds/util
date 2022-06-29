/* **** Notes

Compare ones in case sensitive character strings.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpr_part(signed(*cache),signed char(*di),signed char(*si))) {
if(!cache) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
*cache = (~0x00);
return(cmpr_part_r(cache,di,si));
}
