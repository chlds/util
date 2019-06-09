/* **** Notes

An editor in CUI

UN-COMPLETED

Remarks:
Using C and Win32 API
also e.g., a super daemon like the inet.d, fn. ioctl() and/or more..
*/


# define C_CODE_STDS
# define C_AS
# define C_CMDLN
# define C_W32API
# include "../../../incl/config.h"
// # pragma comment(lib, "user32.lib")

# define COORDS (0x01+(0x03))
# define COUNT_FN (0x01+(0x20))
# define OBJS (0x01+(0x03))

// # define BUFF (0x600)

# define global
global signed(quit) = (0x00);
global signed(command_mode) = (0x00);
global signed(terminate) = (0x00);

signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
enum {
SI, DI, CACHE
};

enum {
CTRL_AT, CTRL_A, CTRL_B, CTRL_C,\
CTRL_D, CTRL_E, CTRL_F, CTRL_G,\
BACKSP, CTRL_I, CTRL_J, CTRL_K,\
CTRL_L, CTRL_M, CTRL_N, CTRL_O,\
CTRL_P, CTRL_Q, CTRL_R, CTRL_S,\
CTRL_T, CTRL_U, CTRL_V, CTRL_W,\
CTRL_X, CTRL_Y, CTRL_Z, CTRL_LBRACKET,\
CTRL_BSLASH, CTRL_RBRACKET, CTRL_ASTERISK, CTRL_HASH
};

auto signed(i), (r);
auto signed short(flag);
auto signed char(c);
// auto unsigned char(c);

/*
auto void(*(device[OBJS]));
auto void(*(search[OBJS]));
auto void(*(module[OBJS]));
auto void(*(window[OBJS]));
//*/

auto COORD(coord);
auto POINT(point);

auto CMDLN_STAT(cmdln_stat);
// auto CONSOLE_SCREEN_BUFFER_INFO(csbi);
// Refer at incl/cmdln.h and incl/config.h

/* **** CODE/TEXT */
XOR(flag,flag);

// Get the handle for the standard output device
cmdln_stat.s_out = (void(*)) GetStdHandle(STD_OUTPUT_HANDLE);

if(!((signed long long) INVALID_HANDLE_VALUE^((signed long long) cmdln_stat.s_out))) {
printf("%s\n", "Error at fn. GetStdHandle()");
return(0x00);
}
// else printf("%s%p\n", "Standard Output Device handle stored on the RAM is: ", cmdln_stat.s_out);


// Get the screen buffer info. on console
r = GetConsoleScreenBufferInfo(cmdln_stat.s_out, &(cmdln_stat.csbi));

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. GetConsoleScreenBufferInfo() with error no. ", r);
return(XNOR(r));
}

else {
// CSBI stat.
// dwSize
printf("%s\n", "A COORD structure that contains the size of the console screen buffer, in character columns and rows.");
printf("%s%d\n", "csbi.dwSize.X: ", cmdln_stat.csbi.dwSize.X);
printf("%s%d\n", "csbi.dwSize.Y: ", cmdln_stat.csbi.dwSize.Y);
// dwCursorPosition
printf("%s\n", "A COORD structure that contains the column and row coordinates of the cursor (caret) in the console screen buffer.");
printf("%s%d\n", "csbi.dwCursorPosition.X: ", cmdln_stat.csbi.dwCursorPosition.X);
printf("%s%d\n", "csbi.dwCursorPosition.Y: ", cmdln_stat.csbi.dwCursorPosition.Y);
// wAttributes
printf("%s\n", "The attributes of the characters written to a screen buffer by the WriteFile and WriteConsole functions, or echoed to a screen buffer by the ReadFile and ReadConsole functions. For more information, see Character Attributes.");
printf("%s%d\n", "csbi.wAttributes: ", cmdln_stat.csbi.wAttributes);
// srWindow
printf("%s\n", "A SMALL_RECT structure that contains the console screen buffer coordinates of the upper-left and lower-right corners of the display window.");
printf("%s%d\n", "csbi.srWindow.Left: ", cmdln_stat.csbi.srWindow.Left);
printf("%s%d\n", "csbi.srWindow.Top: ", cmdln_stat.csbi.srWindow.Top);
printf("%s%d\n", "csbi.srWindow.Right: ", cmdln_stat.csbi.srWindow.Right);
printf("%s%d\n", "csbi.srWindow.Bottom: ", cmdln_stat.csbi.srWindow.Bottom);
}
// dwMaximumWindowSize
printf("%s\n", "A COORD structure that contains the maximum size of the console window, in character columns and rows, given the current screen buffer size and font and the screen size.");
printf("%s%d\n", "csbi.dwMaximumWindowSize.X: ", cmdln_stat.csbi.dwMaximumWindowSize.X);
printf("%s%d\n", "csbi.dwMaximumWindowSize.Y: ", cmdln_stat.csbi.dwMaximumWindowSize.Y);
//*/

/* Set
printf("%s%d\n", "Caret Coordinate X: ", cmdln_stat.csbi.dwCursorPosition.X);
printf("%s%d\n", "Caret Coordinate Y: ", cmdln_stat.csbi.dwCursorPosition.Y);
coord.X = (0x00);
coord.Y = (cmdln_stat.csbi.dwCursorPosition.Y);
r = SetConsoleCursorPosition(cmdln_stat.s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(~(0x00));
}
else {
}
//*/

r = vu_gate(&cmdln_stat);

if(!r) {
printf("%s\n", "<< Error at fn. vu_gate()");
return(XNOR(r));
}

else printf("%s\n", "All Done!");


return(0x00);
}