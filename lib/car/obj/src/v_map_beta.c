/*

Copy to the clipboard.

Remarks:
Refer at util/lib/obj/src/cli_init_roll.c and util/bin/obj/src/ty.c
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl v_map_beta(cli_text_t(*cache),cli_clipboard_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short CR = (0x0D);
auto signed short LF = (0x0A);

auto cli_rule_t *rule;
auto cli_page_t *page;
auto void *g;
auto signed short *w;
auto signed char *b;
auto signed count;
auto signed size;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

rule = (CLI_BASE+(R(rule,*cache)));
b = (*(CLI_INDEX+(R(b,*rule))));
r = ct(b);
INC(r);
r = (r*(sizeof(*w)));
*(CLI_W+(R(size,*argp))) = (r);
g = GlobalAlloc(GMEM_SHARE|(GHND),r);
*(CLI_B+(R(base,*argp))) = (g);
if(!g) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GlobalAlloc() with no.",r,"or",r);
return(0x00);
}

*(CLI_INDEX+(R(flag,*argp))) = GlobalFlags(g);
*(CLI_B+(R(size,*argp))) = GlobalSize(g);

w = (signed short(*)) GlobalLock(g);
*(CLI_W+(R(base,*argp))) = (w);
if(!w) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GlobalLock() with no.",r,"or",r);
return(0x00);
}

// r = (*(CLI_W+(R(size,*argp))));
r = decode2w(r,w,b);
w = (r+(w));
*w = (0x00);

r = GlobalUnlock(g);
if(!r) {
r = GetLastError();
if(NO_ERROR^(r)) {
printf("%s %d %s %Xh \n","<< Error at fn. GlobalUnlock() with no.",r,"or",r);
return(0x00);
}}

return(0x01);
}
