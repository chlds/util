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
auto signed char *cur,*p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

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

i = (R(gauge,R(ty,*argp)));
p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

r = cpy(*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))),p);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

while(0x01) {
if(i<(CLI_EMPTY)) {
printf("%s\n","<< Reached the limit..");
flag++;
break;
// return(0x00);
}
if(!(*w)) break;
r = encode2uni(i,p,*w);
if(!r) {
printf("%s\n","<< Error at fn. encode2uni()");
return(0x00);
}
i = (-r+(i));
p = (r+(p));
w++;
}

*p = (0x00);

if(!flag) {
// limit
r = ct(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ADD(R(gauge,R(ty,*argp)),-r);
r = (R(gauge,R(ty,*argp)));
if(r<(CLI_EMPTY)) {
printf("%s\n","<< Reached the limit..");
return(0x00);
}}

// Aux.
if(!flag) {
r = cpy(*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))),*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
// return(0x00);
//*/
}}

/*
if(!flag) {
r = cli_append(p,&(R(ty,*argp)));
if(!r) {
// empty or..
// printf("%s\n","<< Error at fn. cli_append()");
// return(0x00);
}}
//*/

if(!flag) {
r = cli_clear_rows_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
// return(0x00);
}}

if(!flag) {
r = cli_output_beta(0x00,*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_output_beta()");
// return(0x00);
//*/
}}

if(!flag) {
while(r) {
INC(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
--r;
}}

if(!flag) {
r = cpy(p,*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))));
// i.e., r = cpy(*(CLI_INDEX+(R(cur,R(ty,*argp)))),*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}}

if(!flag) {
r = cli_output_beta(0x01,*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_output_beta()");
// return(0x00);
//*/
}}

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
