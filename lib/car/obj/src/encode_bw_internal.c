/*

Encode to Unicode bytes in UTF-8 out of Unicode characters in UTF-16.

Along with C library

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl encode_bw_internal(signed char(**di),signed short(*si))) {

/* **** DATA, BSS and STACK */
auto signed short SECOND = (0xDC00);
auto signed short FIRST = (0xD800);
auto signed short TEN_B = (0x03FF);
auto signed char *b;
auto signed i,r;
auto signed short second,first;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

AND(flag,0x00);
first = (*si);
if(!(FIRST^(first&(~TEN_B)))) {
si++;
second = (*si);
if(!(SECOND^(second&(~TEN_B)))) OR(flag,0x01);
else --si;
}

b = (0x00);
if(flag) {
AND(flag,0x00);
r = encode_surrogate_bw(&b,second,first);
if(!r) {
printf("%s \n","<< Error at fn. encode_surrogate_bw()");
OR(flag,0x01);
}}
else {
r = encode2uni(&b,*si);
if(!r) {
printf("%s \n","<< Error at fn. encode2uni()");
OR(flag,0x01);
}}

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

if(!(*si)) return(0x00);

si++;

return(r+(encode_bw_internal(di,si)));
}
