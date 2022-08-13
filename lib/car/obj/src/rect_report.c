/*

Rectangle

Remarks:
Only in the Virtual Terminal
*/


# define CAR_H
# define STDIO_H
// # include <sys/ioctl.h>
# include "./../../../config.h"

signed(__cdecl rect_report(signed(arg),rect_t(*argp))) {
auto signed r;
// auto struct winsize w;
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
/*
r = ioctl(0x00,TIOCGWINSZ,&w);
if(EQ(r,~0x00)) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. ioctl() with errno.",r,"or",r);
return(0x00);
}
if(arg<(OBJS)) {
*(arg+(R(left,*argp))) = (0x01);
*(arg+(R(top,*argp))) = (0x01);
*(arg+(R(right,*argp))) = (R(ws_col,w));
*(arg+(R(bottom,*argp))) = (R(ws_row,w));
}
else {
r = (OBJS);
while(r) {
*(--r+(R(left,*argp))) = (0x01);
*(r+(R(top,*argp))) = (0x01);
*(r+(R(right,*argp))) = (R(ws_col,w));
*(r+(R(bottom,*argp))) = (R(ws_row,w));
}}
//*/
return(0x01);
}
