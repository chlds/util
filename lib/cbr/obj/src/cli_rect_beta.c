/*

Set flag CLI_IN to get the current frame or flag CLI_OUT to set the frame.

Remarks:
Refer at fn. cli_init_stat_beta.
The beta edition is for Windows 10 64-bit OS.
*/


# define CBR
# define CLI_W32

# include "../../../incl/config.h"

signed(__cdecl cli_rect_beta(signed short(flag),CLI_RECT(*cache),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed absolute = (0x01);

auto SMALL_RECT rect;
auto signed char *b;
auto signed i,r;
auto signed short point;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(*(CLI_OUT+(R(device,*argp))))) {
printf("%s \n","<< Get a handle to the specified standard output device.");
return(0x00);
}

if(CLI_DBG_D<(CLI_DBG)) printf("%s%p \n","An offset address to the specified standard output device is: ",*(CLI_OUT+(R(device,*argp))));

if(!(CLI_IN^(flag))) {
// Get the current cursor position.
r = GetConsoleScreenBufferInfo(*(CLI_OUT+(R(device,*argp))),&(R(csbi,*argp)));
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. GetConsoleScreenBufferInfo() with error no. ",r," or ",r);
return(0x00);
}
point = (R(Left,R(srWindow,R(csbi,*argp))));
R(left,R(rect,R(ty,*argp))) = (point);
R(left,*cache) = (point);
point = (R(Top,R(srWindow,R(csbi,*argp))));
R(top,R(rect,R(ty,*argp))) = (point);
R(top,*cache) = (point);
point = (R(Right,R(srWindow,R(csbi,*argp))));
R(right,R(rect,R(ty,*argp))) = (point);
R(right,*cache) = (point);
point = (R(Bottom,R(srWindow,R(csbi,*argp))));
R(bottom,R(rect,R(ty,*argp))) = (point);
R(bottom,*cache) = (point);
return(0x01);
}

if(!(CLI_OUT^(flag))) {
rect.Left = (R(left,*cache));
rect.Top = (R(top,*cache));
rect.Right = (R(right,*cache));
rect.Bottom = (R(bottom,*cache));
/*
r = SetConsoleWindowInfo(*(CLI_OUT+(R(device,*argp))),absolute,&rect);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. SetConsoleWindowInfo() with error no. ",r," or ",r);
return(0x00);
}
//*/
return(0x01);
}

return(0x00);
}
