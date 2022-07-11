/*

Encode characters into bytes based on UTF-8

Remarks:
Return the number of encoded bytes
Add support for surrogate pairs
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl encode_bw(signed char(**di),signed short(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
if(!(*si)) {
b = (0x00);
r = concatenate(0x00,di,b);
if(!r) printf("%s \n","<< Error at fn. concatenate()");
return(0x00);
}
r = encode_bw_r(di,si);
if(!(*di)) AND(r,0x00);
return(r);
}
