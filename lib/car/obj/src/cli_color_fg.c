/* **** Notes

Text attributes.

Remarks:
Virtual Terminal
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_color_fg(signed(arg))) {

auto signed fg[] = {
COLOR_FG_BLACK,
COLOR_FG_RED,
COLOR_FG_GREEN,
COLOR_FG_YELLOW,
COLOR_FG_BLUE,
COLOR_FG_MAGENTA,
COLOR_FG_CYAN,
COLOR_FG_WHITE,
COLOR_BRIGHT_FG_BLACK,
COLOR_BRIGHT_FG_RED,
COLOR_BRIGHT_FG_GREEN,
COLOR_BRIGHT_FG_YELLOW,
COLOR_BRIGHT_FG_BLUE,
COLOR_BRIGHT_FG_MAGENTA,
COLOR_BRIGHT_FG_CYAN,
COLOR_BRIGHT_FG_WHITE,
0x00,
};

auto signed char *b;
auto signed r;
auto signed short flag;

r = ord_d(fg,arg);
if(!(r<(ct_d(fg)))) arg = (COLOR_FG_DEFAULT);

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
