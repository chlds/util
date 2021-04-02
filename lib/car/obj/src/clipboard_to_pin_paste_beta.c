/*

Copy to the clipboard.

Remarks:
Refer at util/lib/obj/src/cli_init_roll.c and util/bin/obj/src/ty.c
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl clipboard_to_pin_paste_beta(signed(arg),cli_clipboard_t(*argp))) {

/* **** DATA, BSS and STACK */
auto void *v;
auto void *g;
auto signed short *w;
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

AND(flag,0x00);
// Get a handle to the console window
v = (void(*)) GetConsoleWindow();
if(!v) {
printf("%s \n","<< Error at fn. GetConsoleWindow()");
return(0x00);
}

r = OpenClipboard(v);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. OpenClipboard() with no.",r,"or",r);
return(0x00);
}

if(!arg) {
r = pin_beta(argp);
if(!r) OR(flag,0x01);
}
else {
// r = paste_beta(argp);
// if(!r) OR(flag,0x01);
}

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. CloseClipboard() with no.",r,"or",r);
return(0x00);
}

if(flag) return(0x00);

return(0x01);
}
