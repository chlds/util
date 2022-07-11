/*

Encode characters into bytes based on UTF-8

Remarks:
Call fn. rl later
Return the number of encoded bytes
Add support for surrogate pairs
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl encode_bv_r(signed char(**di),signed short(**si))) {
auto signed char *b;
auto signed r;
auto signed char *sp = (" ");
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
b = (0x00);
r = cv_bw(&b,*si);
if(!r) return(0x00);
r = cat_b(di,b,(void*)0x00);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) return(0x00);
si++;
if(*si) {
if(!(cat_b(di,sp,(void*)0x00))) return(0x00);
}
return(0x01+(encode_bv_r(di,si)));
}
