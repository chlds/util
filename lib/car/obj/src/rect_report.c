/*

Rectangle.

Remarks:
Only in the Virtual Terminal
*/


# define CAR
# include <stdio.h>
// # include <sys/ioctl.h>
# include "../../../incl/config.h"

signed(__cdecl rect_report(signed(arg),rect_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
// auto struct winsize w;

if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

/*
r = ioctl(0x00,TIOCGWINSZ,&w);
if(EQ(r,~0x00)) {
printf("%s %d %s %Xh \n","<< Error at fn. ioctl() with errno.",errno,"or",errno);
return(0x00);
}

if(arg<(CLI_RULE)) {
*(arg+(R(left,*argp))) = (0x00);
*(arg+(R(top,*argp))) = (0x00);
*(arg+(R(right,*argp))) = (R(ws_col,w));
*(arg+(R(bottom,*argp))) = (R(ws_row,w));
}

else {
i = (CLI_RULE);
while(i) {
*(--i+(R(left,*argp))) = (0x00);
*(i+(R(top,*argp))) = (0x00);
*(i+(R(right,*argp))) = (R(ws_col,w));
*(i+(R(bottom,*argp))) = (R(ws_row,w));
}}
//*/

return(0x01);
}
