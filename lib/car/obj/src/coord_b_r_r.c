/*

Set CLI_IN to get the current cursor position or CLI_OUT to set the cursor position at argument io.

Remarks:
Only in the Virtual Terminal
*/


# define CAR
# include <io.h>
# include "../../../incl/config.h"

signed(__cdecl coord_b_r_r(signed char(*y),signed char(*x))) {

auto signed char *es = ("\033[");
auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!y) return(0x00);
if(!x) return(0x00);

b = (0x00);
r = cat_b(&b,es,y,";",x,"H",(void*) 0x00);
if(!r) return(0x00);

r = write(0x01,b,ct(b));
if(!(r^(~0x00))) AND(r,0x00);

embed(0x00,b);
if(b) rl(b);
b = (0x00);

return(r);
}
