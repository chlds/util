/* **** Notes

Text attributes

Remarks:
Virtual Terminal
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl color_text_r(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *p = ("\033[");
if(!argp) return(0x00);
AND(flag,0x00);
b = (0x00);
r = cat_b(&b,p,argp,"m",(void*) 0x00);
if(!r) OR(flag,0x01);
if(!flag) {
r = wr_b(0x01,b,ct(b));
if(!(r^(~0x00))) AND(r,0x00);
}
if(b) rl(b);
b = (0x00);
if(flag) AND(r,0x00);
return(r);
}
