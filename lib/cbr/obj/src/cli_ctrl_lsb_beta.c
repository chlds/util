/*

Press <Ctrl-[> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_lsb_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s ","<Ctrl-[>");

R(flag,R(ty,*argp)) = (CLI_QUIT);

return(0x01);
}
