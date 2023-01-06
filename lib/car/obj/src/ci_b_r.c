/*

Get a byte or bytes for one character based on UTF-8 out of the keyboard
*/


# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed char *(__cdecl ci_b_r(signed(arg))) {
auto signed char *b;
auto signed r;
b = (0x00);
r = (0xFF&(arg));
if(!(cat_bb(&b,r))) {
printf("%s \n","<< Error at fn. cat_bb()");
return(0x00);
}
if(!(ci_b_rr(&b))) {
embed(0x00,b);
rl(b);
b = (0x00);
}
return(b);
}
