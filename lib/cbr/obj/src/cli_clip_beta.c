/*

Copy to the clipboard.

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

signed(__cdecl cli_clip_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short CR = (0x0D);
auto signed short LF = (0x0A);

auto cli_page_t *page;
auto void *g;
auto signed short *w;
auto signed char *b;
auto signed count;
auto signed size;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

//*
r = cli_empty_beta(argp);
if(!r) {
if(CLI_IRR&(R(flag,R(ty,*argp)))) {
if(CLI_DBG) printf("%s ","<< Could not access to the clipboard..");
flag = (signed short) (~(CLI_IRR));
AND(R(flag,R(ty,*argp)),flag);
return(0x01);
}
printf("%s \n","<< Error at fn. cli_empty_beta()");
return(0x00);
}
//*/

b = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
r = ct(b);
if(!r) {
/* empty or..
printf("%s \n","<< Error at fn. ct()");
return(0x01);
//*/
}


//* to copy pages (1 of 2)
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
count = (R(clip,R(clipboard,R(ty,*argp))));
if(count<(0x01)) {
printf("%s \n","<< Could not count at R(clip,R(clipboard,R(ty,*argp..");
return(0x00);
}
while(--count) {
flag = (0x00);
if(CLI_PBR&(R(flag,*page))) flag++;
page = (R(d,*page));
if(!page) break;
if(flag) {
if(!(LINEBREAK_CRLF^(R(linebreak_form,R(config,R(ty,*argp)))))) INC(r);
INC(r);
}
INC(r); // for now..
ADD(r,ct(*(CLI_BASE+(R(base,*page)))));
}
//*/


INC(r);
r = (r*(sizeof(*w)));
g = GlobalAlloc(GMEM_SHARE|(GHND),r);
if(!g) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. GlobalAlloc() with error no. ",r," or ",r);
return(0x00);
}

*(CLI_W+(R(size,R(clipboard,R(ty,*argp))))) = (r);
size = (r);

*(CLI_BASE+(R(base,R(clipboard,R(ty,*argp))))) = (g);
*(CLI_BASE+(R(size,R(clipboard,R(ty,*argp))))) = GlobalSize(g);
*(CLI_INDEX+(R(flag,R(clipboard,R(ty,*argp))))) = GlobalFlags(g);

w = (signed short(*)) GlobalLock(g);
if(!w) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. GlobalLock() with ",r," or ",r);
return(0x00);
}

*(CLI_W+(R(base,R(clipboard,R(ty,*argp))))) = (w);

r = ct(b);
if(!r) {
/* empty or..
printf("%s \n","<< Error at fn. ct()");
return(0x00);
//*/
}
INC(r);
r = (r*(sizeof(*w)));
i = (size);
size = (-r+(size));
if(size<(0x00)) {
printf("%s \n ","<< Could not assign..");
return(0x00);
}

r = decode2w(i,w,b);
if(!r) {
/* empty or..
printf("%s \n","<< Error at fn. decode2w()");
return(0x00);
//*/
}

while(r) {
w++;
--r;
}

*w = (0x00);

count = (R(clip,R(clipboard,R(ty,*argp))));
--count;
if(count) {
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
flag = (0x00);
if(CLI_PBR&(R(flag,*page))) flag++;
page = (R(d,*page));
if(page) {
if(flag) {
if(!(LINEBREAK_CRLF^(R(linebreak_form,R(config,R(ty,*argp)))))) {
r = (0x01);
r = (r*(sizeof(*w)));
size = (-r+(size));
if(size<(0x00)) {
printf("%s \n","<< Could not assign..");
return(0x00);
}
*w = (CR);
w++;
}
*w = (LF);
w++;
}
r = cli_copy_pages(R(linebreak_form,R(config,R(ty,*argp))),count,size,w,page);
if(!r) {
/* empty or..
printf("%s \n","<< Error at fn. cli_copy_pages()");
return(0x00);
//*/
}}}

r = GlobalUnlock(g);
if(!r) {
r = GetLastError();
if(NO_ERROR^(r)) {
printf("%s%d%s%Xh \n","<< Error at fn. GlobalUnlock() with ",r," or ",r);
return(0x00);
}}

flag = (0x00);

r = OpenClipboard(*(CLI_BASE+(R(window,*argp))));
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. OpenClipboard() with ",r," or ",r);
return(0x00);
}

r = EmptyClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. EmptyClipboard() with ",r," or ",r);
// return(0x00);
flag++;
}

if(!flag) {
g = SetClipboardData(CF_UNICODETEXT,g);
if(!g) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. SetClipboardData() with ",r," or ",r);
// return(0x00);
flag++;
}}

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. CloseClipboard() with ",r," or ",r);
return(0x00);
}

g = (*(CLI_BASE+(R(base,R(clipboard,R(ty,*argp))))));
if(g) {
g = GlobalFree(g);
if(g) {
r = GetLastError();
printf("%s%d%s%Xh \n","<< Error at fn. GlobalFree() with ",r," or ",r);
return(0x00);
}
*(CLI_BASE+(R(base,R(clipboard,R(ty,*argp))))) = (g);
*(CLI_BASE+(R(size,R(clipboard,R(ty,*argp))))) = (0x00);
*(CLI_W+(R(size,R(clipboard,R(ty,*argp))))) = (0x00);
*(CLI_W+(R(base,R(clipboard,R(ty,*argp))))) = (0x00);
}

if(flag) {
R(clip,R(clipboard,R(ty,*argp))) = (0x00);
return(0x00);
}

return(0x01);
}
