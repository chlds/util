/*

Press <Ctrl-Q> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_q(cli_property_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(DBG) r = cli_message(0x00,"<Ctrl-Q> ");

return(cli_fn_esc(argp));
}
