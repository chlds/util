/* **** Notes

Convert into an array.

Remarks:
After calling fn. cv_wv, please call fn. rl to unmap the buffer allocated on the RAM.
Based on UTF-16
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_wv(signed short(**di),signed short(**si))) {

auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = concatenate_w(0x00,di,*si);
si++;
if(!r) return(0x00);

//*
AND(r,0x00);
OR(r,0x01);
//*/

return(r+(cv_wv(di,si)));
}
