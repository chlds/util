/*

Set at the cursor position

Remarks:
Only in the Virtual Terminal
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_b_r_r(signed char(*y),signed char(*x))) {
auto signed char *b;
auto signed r;
auto signed char *p = ("\033[");
if(!y) return(0x00);
if(!x) return(0x00);
b = (0x00);
r = cat_b(&b,p,y,";",x,"H",(void*) 0x00);
if(!r) return(0x00);
r = wr_b(0x01/* CLI_OUT */,b,ct(b));
if(!(r^(~0x00))) AND(r,0x00);
embed(0x00,b);
rl(b);
b = (0x00);
return(r);
}
