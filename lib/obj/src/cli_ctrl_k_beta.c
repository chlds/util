/*

Press <Ctrl-K> to invoke the function.

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

signed(__cdecl cli_ctrl_k_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-K>");

r = cli_clip_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clip_beta()");
return(0x00);
}

r = ct(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ADD(R(gauge,R(ty,*argp)),r);

**(CLI_INDEX+(R(cur,R(ty,*argp)))) = (0x00);

r = cli_clear_rows_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}

return(0x01);
}
