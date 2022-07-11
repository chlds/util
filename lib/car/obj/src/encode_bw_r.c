/*

Encode characters into bytes based on UTF-8

Remarks:
Add support for surrogate pairs
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl encode_bw_r(signed char(**di),signed short(*si))) {
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed utf_16 = (0xFFFF);
auto signed surrogatepairs = (0x04);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(!(unpair_dw(&r,si))) {
r = (*si);
r = (utf_16&(r));
}
AND(flag,0x00);
b = (0x00);
r = encode_d(&b,r);
if(!r) {
printf("%s \n","<< Error at fn. encode_d()");
OR(flag,0x01);
}
if(!flag) {
if(!(concatenate(0x00,di,b))) OR(flag,0x01);
}
embed(0x00,b);
if(b) rl(b);
b = (0x00);
if(flag) {
embed(0x00,*di);
if(*di) rl(*di);
*di = (b);
return(0x00);
}
si++;
if(EQ(surrogatepairs,r)) si++;
return(r+(encode_bw_r(di,si)));
}
