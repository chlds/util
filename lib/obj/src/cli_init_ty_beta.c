/*

Initialise along with Win32 API.
Retrieve a handle to the specified standard output device.

Remarks:
The beta edition is for Windows 10 64-bit OS.
*/


# define CLI_W32
# define R(D,S) (S).D
// A local macro function

# include "../../../incl/config_ty.h"

signed(__cdecl cli_init_ty_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed long long ll;
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
// Get a handle to the specified standard output device
*(CLI_OUT+(R(device,*argp))) = (void(*)) GetStdHandle(STD_OUTPUT_HANDLE);
ll = (signed long long) (*(CLI_OUT+(R(device,*argp))));
if(!(ll^((signed long long) INVALID_HANDLE_VALUE))) {
printf("%s\n","<< Error at fn. GetStdHandle()");
return(0x00);
}

if(CLI_DBG) printf("%s%p\n","An offset address for a handle to the specified standard output device is: ",*(CLI_OUT+(R(device,*argp))));

r = GetConsoleScreenBufferInfo(*(CLI_OUT+(R(device,*argp))),&(R(csbi,*argp)));

if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleScreenBufferInfo() with error no. ",r," or ",r);
return(0x00);
}

if(CLI_DBG) {
// .dwSize
printf("%s\n","A COORD structure that contains the size of the console screen buffer, in character columns and rows.");
printf("%s%d%s%d\n","csbi.dwSize.X/Y: ",(*argp).csbi.dwSize.X,"/",(*argp).csbi.dwSize.Y);
// .dwCursorPosition
printf("%s\n","A COORD structure that contains the column and row coordinates of the cursor (caret) in the console screen buffer.");
printf("%s%d%s%d\n","csbi.dwCursorPosition.X/Y: ",(*argp).csbi.dwCursorPosition.X,"/",(*argp).csbi.dwCursorPosition.Y);
// .wAttributes
printf("%s\n","The attributes of the characters written to a screen buffer by the WriteFile and WriteConsole functions, or echoed to a screen buffer by the ReadFile and ReadConsole functions. For more information, see Character Attributes.");
printf("%s%d\n","csbi.wAttributes: ",(*argp).csbi.wAttributes);
// .srWindow
printf("%s\n","A SMALL_RECT structure that contains the console screen buffer coordinates of the upper-left and lower-right corners of the display window.");
printf("%s%d%s%d","csbi.srWindow.Left/Top/Right/Bottom: ",(*argp).csbi.srWindow.Left,"/",(*argp).csbi.srWindow.Top);
printf("%s%d%s%d\n","/",(*argp).csbi.srWindow.Right,"/",(*argp).csbi.srWindow.Bottom);
// .dwMaximumWindowSize
printf("%s\n","A COORD structure that contains the maximum size of the console window, in character columns and rows, given the current screen buffer size and font and the screen size.");
printf("%s%d%s%d\n","csbi.dwMaximumWindowSize.X/Y: ",(*argp).csbi.dwMaximumWindowSize.X,"/",(*argp).csbi.dwMaximumWindowSize.Y);
}

// coordinate
R(x,*(CLI_BASE+(R(coord,R(ty,*argp))))) = (0x00);
R(y,*(CLI_BASE+(R(coord,R(ty,*argp))))) = (0x00);
R(x,*(CLI_OFFSET+(R(coord,R(ty,*argp))))) = (0x00);
R(y,*(CLI_OFFSET+(R(coord,R(ty,*argp))))) = (CLI_HEADER_HEIGHT);

return(0x01);
}
