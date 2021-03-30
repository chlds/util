/*

Encode to Unicode bytes in UTF-8 out of Unicode characters in UTF-16.

Along with C library

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl encode2b_r(signed char(**di),signed short(*si))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

AND(flag,0x00);
b = (0x00);
r = encode2uni(&b,*si);
if(!r) {
printf("%s \n","<< Error at fn. encode2uni()");
OR(flag,0x01);
}
if(!flag) {
if(!(concatenate(0x00,di,b))) {
printf("%s \n","<< Error at fn. concatenate()");
OR(flag,0x01);
}}

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

return(r+(encode2b_r(di,si)));
}
