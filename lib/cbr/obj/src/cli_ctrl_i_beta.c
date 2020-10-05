/*

Press <Ctrl-I> to invoke the function.

Along with C and Windows libraries

Remarks:
Input the tab to workspace and output whitespace to the console screen.
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_i_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char HT = ('\t');
auto signed char SP = (' ');

auto CLI_COORD coord;
auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short y;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-I>");

DEC(R(gauge,R(ty,*argp)));

r = ct(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!r) p = (0x00);
else {
INC(r);
r = (r*(sizeof(*p)));
p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
r = cpy(p,*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!r) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}}

*(CLI_OFFSET+(R(append,R(ty,*argp)))) = (p);

**(CLI_INDEX+(R(cur,R(ty,*argp)))) = (HT);
INC(*(CLI_INDEX+(R(cur,R(ty,*argp)))));

r = cpy(*(CLI_INDEX+(R(cur,R(ty,*argp)))),p);
if(!r) {
if(p) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}}

if(p) {
r = embed(0x00/* flag */,p);
free(p);
p = (0x00);
}
*(CLI_OFFSET+(R(append,R(ty,*argp)))) = (p);

r = cli_indent_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_indent_beta()");
return(0x00);
}

OR(R(flag,R(ty,*argp)),CLI_REFRESH);

return(0x01);
}
