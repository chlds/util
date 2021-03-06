/*

Make a compact frame.

Remarks:
Refer at fn. cli_eq_frame, fn. cli_eq_internal, fn. cli_eq, fn. cli_parse and util/bin/obj/src/ty.c.
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_frame_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed margin = (0x10);
auto signed char *(frame[]) = {
(signed char(*)) ("Default"),
(signed char(*)) ("Left"),
(signed char(*)) ("Center"),
(signed char(*)) ("Right"),
(signed char(*)) (0x00),
};

auto COORD coord;
auto RECT rect;
auto signed char *p;
auto signed bar_height;
auto signed height;
auto signed width;
auto signed x,y;
auto signed i,l,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

p = (*(frame+(R(compact_frame,R(config,R(ty,*argp))))));
if(!p) return(0x00);

if(CLI_DBG) printf("%s%s\n","Frame: ",p);

r = GetSystemMetrics(SM_CXSCREEN);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. GetSystemMetrics(SM_CXSCREEN) with error no. ",r," or ",r);
return(0x00);
}
R(x,R(pixel,R(ty,*argp))) = (r);
x = (r);

r = GetSystemMetrics(SM_CYSCREEN);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. GetSystemMetrics(SM_CYSCREEN) with error no. ",r," or ",r);
return(0x00);
}
R(y,R(pixel,R(ty,*argp))) = (r);
y = (r);

if(R(compact_frame,R(config,R(ty,*argp)))) {
width = (x);
SHR(width,0x02);
if(CLI_DBG) printf("%s%d%s%d\n","Width/X: ",width,"/",R(x,R(pixel,R(ty,*argp))));
height = (y);
SHR(height,0x01);
SHR(y,0x02);
ADD(height,y);
if(CLI_DBG) printf("%s%d%s%d\n","Height/Y: ",height,"/",R(y,R(pixel,R(ty,*argp))));
r = SystemParametersInfo(SPI_GETWORKAREA,0x00,&rect,0x00);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. SystemParametersInfo() with error no. ",r," or ",r);
return(0x00);
}
if(CLI_DBG) printf("%s%d%s%d%s%d%s%d\n","Work Area L/T/R/B: ",R(left,rect),"/",R(top,rect),"/",R(right,rect),"/",R(bottom,rect));
bar_height = R(bottom,rect);
bar_height = (-bar_height+(R(y,R(pixel,R(ty,*argp)))));
if(CLI_DBG) printf("%s%d\n","Bar height: ",bar_height);
y = (height);
y = (-y+(R(bottom,rect)));
SHR(y,0x01);
i = R(compact_frame,R(config,R(ty,*argp)));
if(!(CLI_RIGHT^(i))) {
x = R(right,rect);
x = (-margin+(x));
x = (-width+(x));
}
if(!(CLI_CENTER^(i))) {
x = R(right,rect);
x = (-width+(x));
SHR(x,0x01);
}
if(!(CLI_LEFT^(i))) {
x = R(left,rect);
x = (margin+(x));
}
r = MoveWindow(*(CLI_BASE+(R(window,*argp))),x,y,width,height,0x00);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. MoveWindow() with error no. ",r," or ",r);
return(0x00);
}}

/* change console screen buffer size. */
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}

coord.Y = (R(end_of_roll,R(config,R(ty,*argp))));
coord.X = (R(X,R(dwSize,R(csbi,*argp))));
r = SetConsoleScreenBufferSize(*(CLI_OUT+(R(device,*argp))),coord);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. SetConsoleScreenBufferSize() with error no. ",r," or ",r);
return(0x00);
}

if(CLI_DBG) {
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
printf("%s%d%s%d\n","Re-changed console screen buffer size: ",R(X,R(dwSize,R(csbi,*argp))),"/",R(Y,R(dwSize,R(csbi,*argp))));
}

return(0x01);
}
