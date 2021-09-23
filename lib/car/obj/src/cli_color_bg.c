/* **** Notes

Text attributes.

Remarks:
Virtual Terminal
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_color_bg(signed(arg))) {

auto signed bg[] = {
COLOR_BG_BLACK,
COLOR_BG_RED,
COLOR_BG_GREEN,
COLOR_BG_YELLOW,
COLOR_BG_BLUE,
COLOR_BG_MAGENTA,
COLOR_BG_CYAN,
COLOR_BG_WHITE,
COLOR_BG_BRIGHT_BLACK,
COLOR_BG_BRIGHT_RED,
COLOR_BG_BRIGHT_GREEN,
COLOR_BG_BRIGHT_YELLOW,
COLOR_BG_BRIGHT_BLUE,
COLOR_BG_BRIGHT_MAGENTA,
COLOR_BG_BRIGHT_CYAN,
COLOR_BG_BRIGHT_WHITE,
0x00,
};

auto signed char *b;
auto signed r;
auto signed short flag;

r = ord_d(bg,arg);
if(!(r<(ct_d(bg)))) arg = (COLOR_BG_RESET);

b = (0x00);
r = cv_d(0x0A,&b,arg);
if(!r) return(0x00);

AND(flag,0x00);
r = cli_color_text_r(b);
if(!r) OR(flag,0x01);

if(b) rl(b);
b = (0x00);

if(flag) AND(r,0x00);

return(r);
}
