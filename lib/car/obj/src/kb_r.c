/* **** Notes

I/O

Remarks:
Call fn. rl later
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl kb_r(signed(colm),signed(arg),signed char(*sy))) {
auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;
AND(flag,0x00);
b = k_b(colm,arg,sy,&flag);
embed(0x00,b);
rl(b);
b = (0x00);
if(flag) return(0x01);
co_br(0x00);
return(0x01+(kb_r(colm,arg,sy)));
}
