/*

Press <Ctrl-I> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_i(cli_property_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(DBG) printf("%s ","<Ctrl-I>");

return(cli_fn_indent(argp));
}
