/*

Set flag CLI_IN to get the current cursor position or flag CLI_OUT to set the cursor position.

Remarks:
Refer at fn. cli_init_ty_beta.
The beta edition is for Windows 10 64-bit OS.
*/


# define CBR
# define CLI_W32

# include "../../../incl/config.h"

signed(__cdecl cli_coord_beta(signed short(flag),CLI_COORD(*cache),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD coord;

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
R(x,*cache) = (R(X,R(dwCursorPosition,R(csbi,*argp))));
R(y,*cache) = (R(Y,R(dwCursorPosition,R(csbi,*argp))));
// aux.
point = (R(Left,R(srWindow,R(csbi,*argp))));
R(left,R(rect,R(ty,*argp))) = (point);
point = (R(Top,R(srWindow,R(csbi,*argp))));
R(top,R(rect,R(ty,*argp))) = (point);
point = (R(Right,R(srWindow,R(csbi,*argp))));
R(right,R(rect,R(ty,*argp))) = (point);
point = (R(Bottom,R(srWindow,R(csbi,*argp))));
R(bottom,R(rect,R(ty,*argp))) = (point);
return(0x01);
}

if(!(CLI_OUT^(flag))) {
coord.X = (R(x,*cache));
coord.Y = (R(y,*cache));
r = SetConsoleCursorPosition(*(CLI_OUT+(R(device,*argp))),coord);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. SetConsoleCursorPosition() with error no. ",r," or ",r);
return(0x00);
}
return(0x01);
}

return(0x00);
}
