/*

Encode to Unicode bytes in UTF-8 out of Unicode characters in UTF-16.

Along with C library

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
*/


# define CAR
# include "../../../incl/config.h"
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

signed(__cdecl encode_bw_internal(ENCODE_PACK(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short SECOND = (0xDC00);
auto signed short FIRST = (0xD800);
auto signed short TEN_B = (0x03FF);

auto signed short *w;
auto signed char *b;
auto signed gauge;
auto signed size;
auto signed i,r;
auto signed short second,first;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

flag = (0x00);

if(!(R(base,*argp))) flag++;
if(!(R(b,*argp))) flag++;
if(!(R(w,*argp))) flag++;

size = R(size,*argp);
if(size<(0x01)) flag++;

if(flag) {
R(flag,*argp) = (0x01);
return(0x00);
}

gauge = R(gauge,*argp);
if(gauge<(0x08)) {
r = extend(&(R(base,*argp)),&(R(size,*argp)),R(size,*argp)/* extra */);
if(!r) {
printf("%s\n","<< Error at fn. extend()");
R(flag,*argp) = (0x01);
return(0x00);
}
b = R(base,*argp);
R(b,*argp) = (r+(b));
gauge = (-r+(R(size,*argp)));
R(gauge,*argp) = (gauge);
}

b = R(b,*argp);
w = R(w,*argp);
if(!(*w)) {
*b = (0x00);
return(0x00);
}

first = (*w);
if(!(FIRST^(first&(~TEN_B)))) {
w++;
second = (*w);
if(!(SECOND^(second&(~TEN_B)))) flag = (0x01);
else --w;
}

if(flag) {
r = encode_surrogate_bw(gauge,b,second,first);
if(!r) {
printf("%s\n","<< Error at fn. encode_surrogate_bw()");
R(flag,*argp) = (0x01);
return(0x00);
}}

else {
r = encode2uni(gauge,b,*w);
if(!r) {
printf("%s\n","<< Error at fn. encode2uni()");
R(flag,*argp) = (0x01);
return(0x00);
}}

gauge = (-r+(gauge));
b = (r+(b));
w++;

R(w,*argp) = (w);
R(b,*argp) = (b);
R(gauge,*argp) = (gauge);

return(r+(encode_bw_internal(argp)));
}
