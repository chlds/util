/*

Press <Ctrl-Y> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli.h"

signed(__cdecl cli_ctrl_y(void(*argp))) {

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

if(CLI_DBG) printf("%s","<Ctrl-Y>");

return(0x01);
}