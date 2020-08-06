/*

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_ctrl_g_beta.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_leap_beta(signed char(*sym),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char HT = ('\t');
auto signed char SP = (' ');

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed char c,old;

/* **** CODE/TEXT */
if(!argp) return(0x00);

c = (**(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!c) return(0x00);

old = (c);
flag = (0x00);
i = (0x00);
while(*(sym+(i))) {
if(!(c^(*(sym+(i++))))) flag = (0x01);
}

r = cli_ctrl_f_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_f_beta()");
return(0x00);
}

c = (**(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!(HT^(c))) return(0x01);

if(flag) {
i = (0x00);
while(*(sym+(i))) {
if(!(c^(*(sym+(i++))))) {
flag = (0x00);
break;
}}}

else {
i = (0x00);
while(*(sym+(i))) {
if(!(c^(*(sym+(i++))))) {
flag = (0x01);
break;
}}}

if(!(HT^(old))) {
if(SP^(c)) flag = (0x01);
}

if(!(SP^(old))) {
if(SP^(c)) flag = (0x01);
}

if(!(SP^(c))) flag = (0x00);

if(flag) return(0x01);

return(0x01+(cli_leap_beta(sym,argp)));
}
