/*

Paste out of the clipboard.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_init_roll.c and util/bin/obj/src/ty.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_paste_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto void *g;
auto signed short *w;
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = OpenClipboard(*(CLI_BASE+(R(window,*argp))));
if(!r) {
r = GetLastError();
if(CLI_DBG) printf("%s%d%s%X\n","<< Error at fn. OpenClipboard() with ",r," or ",r);
return(0x01);
}

flag = (0x00);

g = GetClipboardData(CF_UNICODETEXT);
if(!g) {
r = GetLastError();
if(r) {
if(CLI_DBG) printf("%s%d%s%X\n","<< Error at fn. GetClipboardData() with ",r," or ",r);
}
flag = (0x03);
}

w = (signed short(*)) (*(CLI_W+(R(base,R(clipboard,R(ty,*argp))))));
if(w) {
p = (signed char(*)) (w);
embed(0x00,p);
free(w);
w = (0x00);
p = (0x00);
}

if(!flag) {
w = (signed short(*)) GlobalLock(g);
if(!w) {
r = GetLastError();
if(CLI_DBG) printf("%s%d%s%X\n","<< Error at fn. GlobalLock() with ",r," or ",r);
flag = (0x02);
}}

*(CLI_W+(R(base,R(clipboard,R(ty,*argp))))) = (void*) (w);

if(!flag) {
r = cli_pasting_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_pasting_beta()");
flag = (0x01);
}}

/*
w = (signed short(*)) (*(CLI_W+(R(base,R(clipboard,R(ty,*argp))))));
if(w) {
p = (signed char(*)) (w);
embed(0x00,p);
free(w);
w = (0x00);
p = (0x00);
}
//*/
*(CLI_W+(R(base,R(clipboard,R(ty,*argp))))) = (void*) (0x00);

if(flag<(0x02)) {
r = GlobalUnlock(g);
if(!r) {
r = GetLastError();
if(NO_ERROR^(r)) {
printf("%s%d%s%X\n","<< Error at fn. GlobalUnlock() with ",r," or ",r);
flag++;
}}}

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. CloseClipboard() with ",r," or ",r);
return(0x00);
}

if(flag) return(0x00);

return(0x01);
}
