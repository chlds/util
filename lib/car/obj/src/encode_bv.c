/*

Encode characters into bytes based on UTF-8

Remarks:
Call fn. rl later
Return the number of encoded bytes
Add support for surrogate pairs
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl encode_bv(signed char(**di),signed short(**si))) {
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
return(encode_bv_r(di,si));
}
