/*

Press <Ctrl-R> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
Run..
*/


# define CBR
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_r_beta(CLI_W32_STAT(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s ","<Ctrl-R>");

return(0x01);
}
