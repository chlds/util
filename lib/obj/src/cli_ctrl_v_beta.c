/*

Press <Ctrl-V> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_v_beta(CLI_W32_STAT(*argp))) {

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

if(!argp) return(0x00);

if(CLI_DBG) printf("%s","<Ctrl-V>");

return(0x01);
}
