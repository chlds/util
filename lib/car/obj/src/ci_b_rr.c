/*

Get a byte or bytes for one character based on UTF-8 out of the keyboard
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ci_b_rr(signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (*argp);
r = ct_a(b);
if(!r) return(0x00);
return(0x01+(ci_b_rrr(--r,argp)));
}
