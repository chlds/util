/*

Encode characters into bytes based on UTF-8.

Remarks:
No support for surrogate pairs.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl encode2b_r(signed char(**di),signed short(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);

AND(flag,0x00);
b = (0x00);
r = encode_w(&b,*si);
if(!r) {
printf("%s \n","<< Error at fn. encode_w()");
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
