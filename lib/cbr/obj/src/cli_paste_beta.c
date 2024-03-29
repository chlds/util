/*

Paste out of the clipboard.

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

signed(__cdecl cli_paste_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed DENIED = (0x05);

auto void *g;
auto signed short *w;
auto signed char *b;
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = OpenClipboard(*(CLI_BASE+(R(window,*argp))));
if(!r) {
r = GetLastError();
if(CLI_DBG) {
if(!(DENIED^(r))) printf("%s ","<< Could not access to the clipboard..");
else printf("%s%d%s%Xh ","<< Error at fn. OpenClipboard() with ",r," or ",r);
}
return(0x01);
}

flag = (0x00);

g = GetClipboardData(CF_UNICODETEXT);
if(!g) {
r = GetLastError();
// if(CLI_DBG) printf("%s%d%s%Xh\n","<< Error at fn. GetClipboardData() with ",r," or ",r);
flag = (0x03);
}

w = (*(CLI_W+(R(base,R(clipboard,R(ty,*argp))))));

if(!flag) {
w = (signed short(*)) GlobalLock(g);
if(!w) {
r = GetLastError();
if(CLI_DBG) printf("%s%d%s%Xh\n","<< Error at fn. GlobalLock() with ",r," or ",r);
flag = (0x02);
}}

*(CLI_W+(R(base,R(clipboard,R(ty,*argp))))) = (void*) (w);

b = (signed char(*)) (*(CLI_B+(R(base,R(clipboard,R(ty,*argp))))));

if(!flag) {
r = cv_bw(&b,w);
if(!r) {
/* empty or..
printf("%s \n","<< Error at fn. cv_bw()");
flag++;
//*/
}}

*(CLI_B+(R(base,R(clipboard,R(ty,*argp))))) = (void*) (b);

if(!flag) {
r = cli_pasting_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_pasting_beta()");
flag = (0x01);
}}

b = (signed char(*)) (*(CLI_B+(R(base,R(clipboard,R(ty,*argp))))));

if(!flag) {
if(b) {
embed(0x00,b);
free(b);
b = (0x00);
}}

*(CLI_B+(R(base,R(clipboard,R(ty,*argp))))) = (void*) (b);

w = (signed short(*)) (*(CLI_W+(R(base,R(clipboard,R(ty,*argp))))));

/*
if(w) {
r = ct_w(w);
r = (r*(sizeof(*w)));
i = (r);
p = (signed char(*)) (w);
r = embed(r,p);
if(i^(r)) {
printf("%s\n","<< Error at fn. embed()");
flag++;
}
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
printf("%s%d%s%Xh\n","<< Error at fn. GlobalUnlock() with ",r," or ",r);
flag++;
}}}

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. CloseClipboard() with ",r," or ",r);
return(0x00);
}

if(!(0x03^(flag))) return(0x01);
if(flag) return(0x00);

return(0x01);
}
