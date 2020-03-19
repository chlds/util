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
auto signed char CR = ('\r');
auto signed char LF = ('\n');

auto CLI_COORD coord[0x02];
auto CLI_PAGE *page;
auto void *g;
auto signed short *w;
auto signed char *cur,*base,*p,*b;
auto signed long long ll;
auto signed c,i,r;
auto signed offset;
auto signed kept;
auto signed short cr;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

flag = (0x00);

r = OpenClipboard(*(CLI_BASE+(R(window,*argp))));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. OpenClipboard() with ",r," or ",r);
return(0x00);
}

g = GetClipboardData(CF_UNICODETEXT);
if(!g) {
r = GetLastError();
if(r) {
if(CLI_DBG_B<(CLI_DBG)) printf("%s%d%s%X\n","<< Error at fn. GetClipboardData() with ",r," or ",r);
}
r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. CloseClipboard() with ",r," or ",r);
return(0x00);
}
return(0x01);
}

w = (signed short(*)) GlobalLock(g);
if(!w) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GlobalLock() with ",r," or ",r);
r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. CloseClipboard() with ",r," or ",r);
return(0x00);
}
return(0x00);
}

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
base = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
r = compare(cur,base);
offset = (r);

// to append
r = ct(cur);
if(!r) p = (0x00);
else {
kept = keep(&p,cur);
if(!kept) {
printf("%s\n","<< Error at fn. keep()");
return(0x00);
}}

*(CLI_OFFSET+(R(append,R(ty,*argp)))) = (p);

while(0x02) {
cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
i = (R(gauge,R(ty,*argp)));
while(0x01) {
if(i<(CLI_EMPTY)) {
r = cli_extend(CLI_BASE,0x00/* cue */,CLI_EMPTY/* extra */,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_extend()");
// return(0x00);
flag++;
break;
}
i = (CLI_EMPTY);
cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
}
r = encode2uni(i,cur,*w);
if(!r) {
printf("%s\n","<< Error at fn. encode2uni()");
return(0x00);
}
w++;
if(!(*cur)) {
cr = (0x00);
cr = (~(cr));
break;
}
if(!(LF^(*cur))) {
*cur = (0x00);
if(!(LINEBREAK_CRLF^(R(linebreak_form,R(ty,*argp))))) {
if(cr) *(--cur) = (0x00);
}
break;
}
if(!(CR^(*cur))) cr = (0x01);
else cr = (0x00);
i = (-r+(i));
cur = (r+(cur));
}
*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (cur);
R(gauge,R(debug,R(ty,*argp))) = (i);
R(gauge,R(ty,*argp)) = (i);
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
if(!(cr^(~(0x00)))) break;
r = cli_bind_pages(&(R(spool,R(ty,*argp))));
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
return(0x00);
}
r = cli_init_workspace(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}}

if(!flag) {
r = cli_coord_outs_beta(offset+(*(CLI_BASE+(R(base,*page)))),argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_outs_beta()");
// return(0x00);
//*/
}}

R(cache,R(spool,R(ty,*argp))) = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
ll = (signed long long) (R(cache,R(spool,R(ty,*argp))));
if(!(ll^((signed long long) page))) i = (0x00);
else i = (0x01);

while(i) {
page = (R(d,*page));
// if(!page) break;
if(!(ll^((signed long long) page))) i = (0x00);
else i = (0x01);
if(!flag) {
r = cli_clear_row_beta(0x00/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_row_beta()");
// return(0x00);
}}
if(!flag) {
if(page) {
r = cli_coord_page_beta(0x00/* comeback */,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_page_beta()");
// return(0x00);
}}}}

// depart.
R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (R(y,*(CLI_BASE+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))));
R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (0x00);

if(!flag) {
// to copy
r = ct(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
r = (r+(ct(p)));
INC(r);
i = (*(CLI_BASE+(R(size,R(roll,R(ty,*argp))))));
if(i<(r)) {
r = cli_extend(CLI_BASE,0x00/* cue */,CLI_EMPTY+(-i+(r))/* extra */,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_extend()");
return(0x00);
}}
r = cpy(*(CLI_INDEX+(R(cur,R(ty,*argp)))),p);
// i.e., r = cpy(*(CLI_INDEX+(R(cur,R(ty,*argp)))),*(CLI_OFFSET+(R(append,R(ty,*argp)))));
if(!r) {
if(p) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}}
ADD(R(gauge,R(debug,R(ty,*argp))),-r);
ADD(R(gauge,R(ty,*argp)),-r);
}

// release an appendant
if(p) {
r = release(kept,&p);
if(kept^(r)) {
printf("%s\n","<< Error at fn. release()");
return(0x00);
}
*(CLI_OFFSET+(R(append,R(ty,*argp)))) = (p);
}

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

y = (R(Top,R(srWindow,R(csbi,*argp))));

if(!flag) {
r = cli_coord_outs_beta(*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_outs_beta()");
// return(0x00);
//*/
}}

R(y,*(CLI_LEAD+(R(coord,*page)))) = (R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))));
R(x,*(CLI_LEAD+(R(coord,*page)))) = (R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))));

page = (R(d,*page));
if(!page) r = (0x01);
else r = (0x00);

if(!flag) {
r = cli_clear_row_beta(r/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_row_beta()");
// return(0x00);
}}

if(!flag) {
if(page) {
r = cli_coord_output_pages_beta(0x00/* comeback */,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_output_pages_beta()");
// return(0x00);
}}}

// fix the frame
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(y^(R(Top,R(srWindow,R(csbi,*argp))))) {
R(y,*(coord+(CLI_OFFSET))) = (y);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}
// come back
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = GlobalUnlock(g);
if(!r) {
r = GetLastError();
if(!(NO_ERROR^(r))) {
}
else {
printf("%s%d%s%X\n","<< Error at fn. GlobalUnlock() with ",r," or ",r);
flag++;
}}

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. CloseClipboard() with ",r," or ",r);
return(0x00);
}

if(flag) return(0x00);

return(0x01);
}
