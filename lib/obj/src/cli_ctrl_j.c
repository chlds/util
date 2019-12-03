/*

Press <Ctrl-J> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli.h"

signed(__cdecl cli_ctrl_j(CLI_STAT(*argp))) {

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

if(!argp) return(0x00);

(*argp).ty.cyl.linebreak = (0x01);

if(CLI_DBG) printf("%s","<Ctrl-J>");

return(0x01);
}
