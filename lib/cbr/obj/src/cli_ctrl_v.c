/*

Press <Ctrl-V> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_v(cli_property_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(DBG) printf("%s ","<Ctrl-V>");

return(0x01);
}
