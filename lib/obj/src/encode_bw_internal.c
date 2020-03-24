/*

Encode to Unicode bytes in UTF-8 out of Unicode characters in UTF-16.

Along with C library

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
*/


# define CL_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cl.h"

signed(__cdecl encode_bw_internal(ENCODE_PACK(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short *w;
auto signed char *b;
auto signed gauge;
auto signed size;
auto signed i,r;
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

r = encode2uni(gauge,b,*w);
if(!r) {
printf("%s\n","<< Error at fn. encode2uni()");
R(flag,*argp) = (0x01);
return(0x00);
}

gauge = (-r+(gauge));
b = (r+(b));
w++;

R(w,*argp) = (w);
R(b,*argp) = (b);
R(gauge,*argp) = (gauge);

return(r+(encode_bw_internal(argp)));
}
