/*

Empty the clipboard.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_init_roll.c and util/bin/obj/src/ty.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_empty_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed DENIED = (0x05);

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = OpenClipboard(*(CLI_BASE+(R(window,*argp))));
if(!r) {
r = GetLastError();
if(!(DENIED^(r))) OR(R(flag,R(ty,*argp)),CLI_IRR);
else printf("%s%d%s%Xh\n","<< Error at fn. OpenClipboard() with ",r," or ",r);
return(0x00);
}

flag = (0x00);

r = EmptyClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. EmptyClipboard() with ",r," or ",r);
flag = (0x01);
}

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. CloseClipboard() with ",r," or ",r);
return(0x00);
}

if(flag) return(0x00);

return(0x01);
}
