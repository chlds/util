# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl color_text_r(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed char c[] = ("\033[");
auto signed char a[] = ("m");
if(!argp) return(0x00);
b = catha(c,catta(argp,a));
r = wr_b(0x01,b,ct(b));
if(!(r^(~0x00))) AND(r,0x00);
rlse(b);
b = (0x00);
return(r);
}
