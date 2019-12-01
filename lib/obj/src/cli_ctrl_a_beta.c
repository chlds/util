/*

Press <Ctrl-A> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli_w32.h"

signed(__cdecl cli_ctrl_a_beta(CLI_W32_STAT(*argp))) {

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

if(!argp) return(0x00);

if(CLI_DBG) printf("%s","<Ctrl-A>");

return(0x01);
}
