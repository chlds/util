/*

Empty the clipboard.

Along with C and Windows libraries
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl cli_clip_to_empty_beta(void)) {

/* **** DATA, BSS and STACK */
auto signed DENIED = (0x05);

auto signed char *b;
auto void *v;
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
// if(!argp) return(0x00);

// retrieve a handle to the console window
v = (void(*)) GetConsoleWindow();
if(!v) {
printf("%s\n","<< Error at fn. GetConsoleWindow()");
return(0x00);
}

r = OpenClipboard(v);
if(!r) {
r = GetLastError();
// if(!(DENIED^(r))) OR(*(CLI_BASE+(R(flag,*argp))),CLI_IRR);
printf("%s %d %s %Xh \n","<< Error at fn. OpenClipboard() with no.",r,"or",r);
return(0x00);
}

AND(flag,0x00);
r = EmptyClipboard();
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. EmptyClipboard() with no.",r,"or",r);
OR(flag,0x01);
}

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. CloseClipboard() with no.",r,"or",r);
return(0x00);
}

v = (0x00);

if(flag) return(0x00);

return(0x01);
}
