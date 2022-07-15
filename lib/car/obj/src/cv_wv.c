/* **** Notes

Convert into an array

Remarks:
Call fn. rl to unmap the buffer allocated on the RAM
Based on UTF-16
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_wv(signed short(*cache),signed short(**di),signed short(**si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = concatenate_w(0x00,di,*si);
if(!r) return(0x00);
if(cache) {
if(!(concatenate_w(0x00,di,cache))) return(0x00);
}
si++;
return(0x01+(cv_wv(cache,di,si)));
}
