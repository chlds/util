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
auto signed short CR = (0x0D);
auto signed short LF = (0x0A);

auto CLI_PAGE *page;
auto void *g;
auto signed short *w;
auto signed char *p;
auto signed long long sll;
auto signed count;
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


//* to copy pages (1 of 2)
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
count = (R(clip,R(clipboard,R(ty,*argp))));
if(count<(0x01)) {
printf("%s\n","<< Could not count at R(clip,R(clipboard,R(ty,*argp..");
return(0x00);
}
while(--count) {
page = (R(d,*page));
if(!page) break;
if(!(LINEBREAK_CRLF^(R(linebreak_form,R(ty,*argp))))) INC(r);
INC(r);
ADD(r,ct(*(CLI_BASE+(R(base,*page)))));
}
//*/


INC(r);
r = (r*(sizeof(signed short)));

g = GlobalAlloc(GMEM_SHARE|(GHND),r);

i = (r);

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

r = decode2w(r,w,p);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. decode2w()");
return(0x00);
//*/
}


//* to copy pages (2 of 2)
ADD(i,-r);
if(i<(0x00)) {
printf("%s\n","<< Could not assign..");
return(0x00);
}
while(r) {
w++;
--r;
}
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
count = (R(clip,R(clipboard,R(ty,*argp))));
while(--count) {
page = (R(d,*page));
if(!page) break;
if(!(LINEBREAK_CRLF^(R(linebreak_form,R(ty,*argp))))) {
*w = (CR);
w++;
--i;
}
*w = (LF);
w++;
--i;
r = decode2w(i,w,*(CLI_BASE+(R(base,*page))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. decode2w()");
return(0x00);
//*/
}
ADD(i,-r);
if(i<(0x00)) {
printf("%s\n","<< Could not assign..");
return(0x00);
}
while(r) {
w++;
--r;
}}
//*/


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
