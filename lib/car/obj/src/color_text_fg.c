/* **** Notes

Text attributes

Remarks:
Virtual Terminal
*/


# define CAR_H
# define COLOR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl color_text_fg(signed(arg))) {
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed fg[] = {
COLOR_BLACK,
COLOR_RED,
COLOR_GREEN,
COLOR_YELLOW,
COLOR_BLUE,
COLOR_MAGENTA,
COLOR_CYAN,
COLOR_WHITE,
COLOR_BRIGHT_BLACK,
COLOR_BRIGHT_RED,
COLOR_BRIGHT_GREEN,
COLOR_BRIGHT_YELLOW,
COLOR_BRIGHT_BLUE,
COLOR_BRIGHT_MAGENTA,
COLOR_BRIGHT_CYAN,
COLOR_BRIGHT_WHITE,
0x00,
};
r = ord_d(fg,arg);
if(!(r<(ct_d(fg)))) arg = (COLOR_RESET);
b = (0x00);
r = cv_d(0x0A,&b,arg);
if(!r) return(0x00);
AND(flag,0x00);
r = color_text_r(b);
if(!r) OR(flag,0x01);
if(b) rl(b);
b = (0x00);
if(flag) AND(r,0x00);
return(r);
}
