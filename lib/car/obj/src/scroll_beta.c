/*

Scroll a content on console screen buffer up or down in relative coordinates.

Remarks:
Refer at fn. cli_io_beta.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl scroll_beta(signed short(arg))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto void *v;

auto SMALL_RECT rect;
auto signed relative;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
AND(flag,0x00);
v = GetStdHandle(STD_OUTPUT_HANDLE);
if(!v) flag++;
if(EQ(INVALID_HANDLE_VALUE,v)) flag++;
if(flag) {
r = cli_message(0x00,"<< Error at fn. GetStdHandle() \n");
return(0x00);
}

AND(relative,0x00);
rect.Left = (relative);
rect.Top = (arg);
rect.Right = (relative);
rect.Bottom = (arg);

r = SetConsoleWindowInfo(v,relative,&rect);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. SetConsoleWindowInfo() with error no. ",r," or ",r);
return(0x00);
}

return(r);
}
