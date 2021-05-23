/* **** Notes

Text attributes.

Remarks:
Virtual Terminal
*/


# define CAR
# include <io.h>
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_color_text_r(signed char(*argp))) {

auto signed char *es = ("\033[");
auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

AND(flag,0x00);
b = (0x00);
r = cat_b(&b,es,argp,"m",(void*) 0x00);
if(!r) OR(flag,0x01);

if(!flag) {
r = write(0x01,b,ct(b));
if(!(r^(~0x00))) AND(r,0x00);
}

if(b) rl(b);
b = (0x00);

if(flag) AND(r,0x00);

return(r);
}
