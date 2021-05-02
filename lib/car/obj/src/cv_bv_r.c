/* **** Notes

Convert into an array.

Remarks:
After calling fn. cv_bv, please call fn. rl to unmap the buffer allocated on the RAM.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_bv_r(signed char(*di),signed char(**si))) {

auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) {
*di = (0x00);
*(--di) = (0x00);
return(0x00);
}

r = cpy(di,*si);
if(!r) return(0x00);

di = (r+(di));
*di = (SP);
di++;
si++;

return(0x01+(cv_bv_r(di,si)));
}
