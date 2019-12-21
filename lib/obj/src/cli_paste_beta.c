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
auto signed char *p;
auto signed long long sll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = OpenClipboard(*(CLI_BASE+(R(window,*argp))));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. OpenClipboard() with ",r," or ",r);
return(0x00);
}

flag = (0x00);

g = GetClipboardData(CF_TEXT);
if(!g) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetClipboardData() with ",r," or ",r);
flag = (0x01);
}

if(!flag) {
p = (signed char(*)) GlobalLock(g);
if(!p) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GlobalLock() with ",r," or ",r);
return(0x00);
}
// limit
flag = (0x00);
r = ct(p);
ADD(R(gauge,R(ty,*argp)),-r);
r = (R(gauge,R(ty,*argp)));
if(r<(0x01+(0x04))) {
printf("%s\n","<< Reached the limit..");
flag = (0x01);
}
if(!flag) {
r = cpy(*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))),p);
if(!r) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}}
r = GlobalUnlock(g);
if(!r) {
r = GetLastError();
if(!(NO_ERROR^(r))) {
}
else {
printf("%s%d%s%X\n","<< Error at fn. GlobalUnlock() with ",r," or ",r);
return(0x00);
}}}

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. CloseClipboard() with ",r," or ",r);
return(0x00);
}

// clipped pages
R(clip,R(ty,*argp)) = (0x00);

if(flag) return(0x00);

return(0x01);
}
