/* **** Notes

Convert

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char*(__cdecl cv_a(signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
r = ct(argp);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
r = cv_a_r(arg,b,argp);
if(!r) {
rl(b);
b = (0x00);
}
return(b);
}
