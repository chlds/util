/* **** Notes

I/O

Remarks:
Call fn. rl later
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed char *(__cdecl k_b(signed(colm),signed(arg),signed char(*sy))) {
auto signed char *b;
auto signed r;
auto signed short flag;
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
AND(flag,0x00);
b = (0x00);
r = k_b_r(colm,arg,sy,&b);
if(!r) OR(flag,0x01);
if(EQ(CTRL_Q,r)) OR(flag,0x01);
if(flag) {
embed(0x00,b);
rl(b);
b = (0x00);
}
return(b);
}
