/*

Set CLI_IN to get the current frame or CLI_OUT to set the frame at argument io.

Remarks:
Refer at fn. cli_init_property.
The beta edition is for Windows 10 64-bit OS.
*/


# define CAR
# include "../../../incl/config.h"
# include <windows.h>

signed(__cdecl rect_beta(signed short(io),signed short(arg),rect_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed absolute = (0x01);

auto signed char *b;
auto void *v;

auto SMALL_RECT rect;
auto CONSOLE_SCREEN_BUFFER_INFO csbi;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!(arg<(CLI_BOIL))) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);
v = GetStdHandle(STD_OUTPUT_HANDLE);
if(!v) flag++;
if(EQ(INVALID_HANDLE_VALUE,v)) flag++;
if(flag) {
printf("%s \n","<< Error at fn. GetStdHandle()");
return(0x00);
}

if(DBG_D<(DBG)) printf("%s %p \n","An offset address to the specified standard output device is:",v);

if(!(io^(CLI_IN))) {
// Get the current cursor position.
r = GetConsoleScreenBufferInfo(v,&csbi);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetConsoleScreenBufferInfo() with error no.",r,"or",r);
return(0x00);
}
*(arg+(R(left,*argp))) = (R(Left,R(srWindow,csbi)));
*(arg+(R(top,*argp))) = (R(Top,R(srWindow,csbi)));
*(arg+(R(right,*argp))) = (R(Right,R(srWindow,csbi)));
*(arg+(R(bottom,*argp))) = (R(Bottom,R(srWindow,csbi)));
return(0x01);
}

if(!(io^(CLI_OUT))) {
rect.Left = (*(arg+(R(left,*argp))));
rect.Right = (*(arg+(R(right,*argp))));
rect.Top = (*(arg+(R(top,*argp))));
rect.Bottom = (*(arg+(R(bottom,*argp))));
/*
r = SetConsoleWindowInfo(v,absolute,&rect);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetConsoleWindowInfo() with error no.",r,"or",r);
return(0x00);
}
//*/
return(0x01);
}

return(0x00);
}
