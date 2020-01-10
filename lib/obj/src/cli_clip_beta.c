/*

Copy to the clipboard.

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

signed(__cdecl cli_clip_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto void *g;
auto signed short *w;
auto signed char *p;
auto signed long long sll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

//*
r = cli_empty_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_empty_beta()");
return(0x00);
}
//*/

r = ct(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. ct()");
return(0x01);
//*/
}

INC(r);

g = GlobalAlloc(GMEM_SHARE|(GHND),0x02*(r*(sizeof(signed char))));

*(CLI_BASE+(R(base,R(clipboard,R(ty,*argp))))) = (g);
R(flag,R(clipboard,R(ty,*argp))) = GlobalFlags(g);
R(size,R(clipboard,R(ty,*argp))) = GlobalSize(g);

w = (signed short(*)) GlobalLock(g);
if(!w) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GlobalLock() with ",r," or ",r);
return(0x00);
}

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

while(0x01) {
if(!(*p)) break;
r = decode2uni(&i,p);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}
*w = (signed short) (i);
w++;
p = (r+(p));
}

*w = (0x00);

r = GlobalUnlock(g);
if(!r) {
r = GetLastError();
if(!(NO_ERROR^(r))) {
}
else {
printf("%s%d%s%X\n","<< Error at fn. GlobalUnlock() with ",r," or ",r);
return(0x00);
}}

flag = (0x00);

r = OpenClipboard(*(CLI_BASE+(R(window,*argp))));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. OpenClipboard() with ",r," or ",r);
return(0x00);
}

r = EmptyClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. EmptyClipboard() with ",r," or ",r);
// return(0x00);
flag++;
}

if(!flag) {
g = SetClipboardData(CF_UNICODETEXT,g);
if(!g) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetClipboardData() with ",r," or ",r);
// return(0x00);
flag++;
}}

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. CloseClipboard() with ",r," or ",r);
return(0x00);
}

if(*(CLI_BASE+(R(base,R(clipboard,R(ty,*argp)))))) {
*(CLI_BASE+(R(base,R(clipboard,R(ty,*argp))))) = GlobalFree(*(CLI_BASE+(R(base,R(clipboard,R(ty,*argp))))));
if(*(CLI_BASE+(R(base,R(clipboard,R(ty,*argp)))))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GlobalFree() with ",r," or ",r);
return(0x00);
}}

if(flag) {
R(clip,R(clipboard,R(ty,*argp))) = (0x00);
return(0x00);
}

return(0x01);
}
