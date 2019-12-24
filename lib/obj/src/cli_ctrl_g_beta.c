/*

Press <Ctrl-G> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_g_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char HT = ('\t');
auto signed char SP = (' ');

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-G>");

c = (**(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!c) return(0x01);

flag = (0x00);
if(!(HT^(c))) flag = (0x01);
if(!(SP^(c))) flag = (0x01);

r = cli_ctrl_f_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_f_beta()");
return(0x00);
}

c = (**(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!(HT^(c))) return(0x01);

if(flag) {
if(SP^(c)) return(0x01);
}

return(0x01+(cli_ctrl_g_beta(argp)));
}
