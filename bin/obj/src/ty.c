/*

Typewriter
*/


# define BUFF (0x100000)
# define BUFF1 (BUFF)
// 1MiB

# define CLI_W32
# include "../../../incl/config_ty.h"

signed(__cdecl main(signed argc,signed char **argv,signed char **envp)) {

auto signed long long ll;
auto signed char *p;
auto signed i,r;

auto signed char roll1[BUFF1] = {
(0x00),
};

auto signed char roll[BUFF] = {
(0x00),
};

auto CLI_W32_STAT cli_w32_stat = {
(0x00),
};

// Initialise
*(CLI_OFFSET+(cli_w32_stat.ty.cyl.base)) = (roll);
*(CLI_OFFSET1+(cli_w32_stat.ty.cyl.base)) = (roll1);

// Also to align words along with tabs after wrapping words
*(CLI_OFFSET2+(cli_w32_stat.ty.cyl.base)) = (*(CLI_OFFSET+(cli_w32_stat.ty.cyl.base)));

// Get a handle to the standard output device
*(CLI_OUT+(cli_w32_stat.device)) = (void(*)) GetStdHandle(STD_OUTPUT_HANDLE);
ll = (signed long long) (*(CLI_OUT+(cli_w32_stat.device)));
if(!(ll^((signed long long) INVALID_HANDLE_VALUE))) {
printf("%s\n","<< Error at fn. GetStdHandle()");
return(0x00);
}

if(CLI_DBG) printf("%s%p\n","An offset address for a handle to the standard output device is: ",*(CLI_OUT+(cli_w32_stat.device)));

r = GetConsoleScreenBufferInfo(*(CLI_OUT+(cli_w32_stat.device)),&(cli_w32_stat.csbi));

if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleScreenBufferInfo() with error no. ",r," or ",r);
return(0x00);
}

if(CLI_DBG) {
// .dwSize
printf("%s\n","A COORD structure that contains the size of the console screen buffer, in character columns and rows.");
printf("%s%d%s%d\n","csbi.dwSize.X/Y: ",cli_w32_stat.csbi.dwSize.X,"/",cli_w32_stat.csbi.dwSize.Y);
// .dwCursorPosition
printf("%s\n","A COORD structure that contains the column and row coordinates of the cursor (caret) in the console screen buffer.");
printf("%s%d%s%d\n","csbi.dwCursorPosition.X/Y: ",cli_w32_stat.csbi.dwCursorPosition.X,"/",cli_w32_stat.csbi.dwCursorPosition.Y);
// .wAttributes
printf("%s\n","The attributes of the characters written to a screen buffer by the WriteFile and WriteConsole functions, or echoed to a screen buffer by the ReadFile and ReadConsole functions. For more information, see Character Attributes.");
printf("%s%d\n","csbi.wAttributes: ",cli_w32_stat.csbi.wAttributes);
// .srWindow
printf("%s\n","A SMALL_RECT structure that contains the console screen buffer coordinates of the upper-left and lower-right corners of the display window.");
printf("%s%d%s%d","csbi.srWindow.Left/Top/Right/Bottom: ",cli_w32_stat.csbi.srWindow.Left,"/",cli_w32_stat.csbi.srWindow.Top);
printf("%s%d%s%d\n","/",cli_w32_stat.csbi.srWindow.Right,"/",cli_w32_stat.csbi.srWindow.Bottom);
// .dwMaximumWindowSize
printf("%s\n","A COORD structure that contains the maximum size of the console window, in character columns and rows, given the current screen buffer size and font and the screen size.");
printf("%s%d%s%d\n","csbi.dwMaximumWindowSize.X/Y: ",cli_w32_stat.csbi.dwMaximumWindowSize.X,"/",cli_w32_stat.csbi.dwMaximumWindowSize.Y);
}

return(0x01);
}
