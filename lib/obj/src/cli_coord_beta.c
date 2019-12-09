/*

Initialise along with Win32 API.
Coordinates.

Remarks:
Set flag CLI_IN to get the current cursor position or flag CLI_OUT to set the cursor position.
Refer at fn. cli_init_ty_beta.
The beta edition is for Windows 10 64-bit OS.
*/


# define R(D,S) (S).D
// A local macro function

# define CLI_W32
# include "../../../incl/config_ty.h"

signed(__cdecl cli_coord_beta(signed short(flag),CLI_COORD(*cache),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD coord;

auto signed long long ll;
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(*(CLI_OUT+(R(device,*argp))))) {
printf("%s\n","<< Get a handle to the specified standard output device.");
return(0x00);
}

if(CLI_DBG_D<(CLI_DBG)) printf("%s%p\n","An offset address for a handle to the specified standard output device is: ",*(CLI_OUT+(R(device,*argp))));

if(!(CLI_IN^(flag))) {
// Get the current cursor position.
r = GetConsoleScreenBufferInfo(*(CLI_OUT+(R(device,*argp))),&(R(csbi,*argp)));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleScreenBufferInfo() with error no. ",r," or ",r);
return(0x00);
}
R(x,*cache) = (R(X,R(dwCursorPosition,R(csbi,*argp))));
R(y,*cache) = (R(Y,R(dwCursorPosition,R(csbi,*argp))));
return(0x01);
}

if(!(CLI_OUT^(flag))) {
coord.X = (R(x,*cache));
coord.Y = (R(y,*cache));
r = SetConsoleCursorPosition(*(CLI_OUT+(R(device,*argp))),coord);
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCursorPosition() with error no. ",r," or ",r);
return(0x00);
}
return(0x01);
}

return(0x00);
}
