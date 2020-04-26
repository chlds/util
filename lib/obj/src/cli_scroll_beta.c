/*

Scroll a content on console screen buffer up or down in relative coordinates.

Remarks:
Refer at fn. cli_io_beta.
*/


# define CLI_MACRO
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_scroll_beta(signed short(range),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto SMALL_RECT rect;

auto signed char *p;
auto signed relative;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

relative = (0x00);

rect.Left = (relative);
rect.Top = ((signed short) range);
rect.Right = (relative);
rect.Bottom = ((signed short) range);

r = SetConsoleWindowInfo(*(CLI_OUT+(R(device,*argp))),relative,&rect);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. SetConsoleWindowInfo() with error no. ",r," or ",r);
return(0x00);
}

return(range);
}
