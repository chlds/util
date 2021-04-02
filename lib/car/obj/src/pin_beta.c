/*

Copy to the clipboard.

Remarks:
Refer at util/lib/obj/src/cli_init_roll.c and util/bin/obj/src/ty.c
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl pin_beta(cli_clipboard_t(*argp))) {

/* **** DATA, BSS and STACK */
auto void *g;
auto signed short *w;
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = EmptyClipboard();
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. EmptyClipboard() with no.",r,"or",r);
return(0x00);
}

g = (*(CLI_B+(R(base,*argp))));
if(!g) return(0x00);

g = SetClipboardData(CF_UNICODETEXT,g);
*(CLI_D+(R(base,*argp))) = (g);
if(!g) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetClipboardData() with no.",r,"or",r);
return(0x00);
}

return(0x01);
}
