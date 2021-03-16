/*

Press <Ctrl-Q> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_q_beta(CLI_W32_STAT(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s ","<Ctrl-Q>");

R(flag,R(ty,*argp)) = (CLI_QUIT);

return(0x01);
}
