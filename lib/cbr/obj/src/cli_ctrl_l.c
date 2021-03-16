/*

Press <Ctrl-L> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_l(cli_property_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(DBG) printf("%s ","<Ctrl-L>");

return(cli_cue_back(argp));
}
