/* **** Notes

Convert into an array.

Remarks:
After calling fn. cv_bv, please call fn. rl to unmap the buffer allocated on the RAM.
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_bv(signed char(*cache),signed char(**di),signed char(**si))) {

auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = concatenate(0x00,di,*si);
if(!r) return(0x00);
if(cache) {
if(!(concatenate(0x00,di,cache))) return(0x00);
}

si++;

return(0x01+(cv_bv(cache,di,si)));
}
