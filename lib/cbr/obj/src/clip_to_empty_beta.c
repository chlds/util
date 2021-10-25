/*

Empty the clipboard.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl clip_to_empty_beta(void)) {

auto signed char *b;
auto void *v;
auto signed r;
auto signed short flag;
auto signed DENIED = (0x05);

// if(!argp) return(0x00);

// retrieve a handle to the console window
v = (void(*)) GetConsoleWindow();
if(!v) {
printf("%s\n","<< Error at fn. GetConsoleWindow()");
return(0x00);
}

r = OpenClipboard(v);
v = (0x00);
if(!r) {
r = GetLastError();
// if(!(DENIED^(r))) OR(*(CLI_BASE+(R(flag,*argp))),CLI_IRR);
printf("%s %d %s %Xh \n","<< Error at fn. OpenClipboard() with no.",r,"or",r);
return(0x00);
}

r = EmptyClipboard();
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. EmptyClipboard() with no.",r,"or",r);
}

if(!(CloseClipboard())) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. CloseClipboard() with no.",r,"or",r);
return(0x00);
}

return(r);
}
