/* **** Notes

Detect keys.
*/


# define DUAL_CONFIG_H
# define DK_H
# define STDIO_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl agent_dk_rrrr(signed(arg),signed char(*argp))) {

auto signed short *ww;
auto signed short *w;
auto signed r;
auto signed short flag;

if(arg<(CTRL_KEYS)) return(0x00);
if(!argp) return(0x00);

w = (0x00);
if(!(cv_wb(&w,argp))) {
printf("%s \n","<< Error at fn. cv_wb()");
return(0x00);
}

printf("(");
ww = (w);
while(*ww) {
r = (0xFFFF&(*ww));
printf("%Xh",r);
ww++;
if(*ww) printf(" ");
}

printf(") ");
if(!(unmap_w(&w))) {
printf("%s \n","<< Error at fn. unmap_w()");
return(0x00);
}

printf("U+%Xh ",arg);

return(cli_o_b(0x01,argp));
}
