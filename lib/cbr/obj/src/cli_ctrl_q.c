/*

Press <Ctrl-Q> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_q(void(*argp))) {

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

if(CLI_DBG) printf("%s","<Ctrl-Q>");

return(0x01);
}
