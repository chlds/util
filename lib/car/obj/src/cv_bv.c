/* **** Notes

Convert into an array.

Remarks:
After calling fn. cv_bv, please call fn. rl to unmap the buffer allocated on the RAM.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_bv(signed char(**di),signed char(**si))) {

auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);

r = ct_bv(&i,si);
if(!r) return(0x00);

r = (i+(r));
r++;
r = (r*(sizeof(**di)));
*di = (signed char(*)) alloc(r);
if(!(*di)) return(0x00);

return(cv_bv_r(*di,si));
}
