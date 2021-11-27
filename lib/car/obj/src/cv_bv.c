/* **** Notes

Convert into an array.

Remarks:
After calling fn. cv_bv, please call fn. rl to unmap the buffer allocated on the RAM.
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_bv(signed char(**di),signed char(**si))) {

auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = concatenate(0x00,di,*si);
si++;
if(!r) return(0x00);

//*
AND(r,0x00);
OR(r,0x01);
//*/

return(r+(cv_bv(di,si)));
}
