/*

Press <Ctrl-O> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_o_beta(CLI_W32_STAT(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s ","<Ctrl-O>");

r = cli_clip_beta(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_clip_beta()");
return(0x00);
}

return(0x01);
}
