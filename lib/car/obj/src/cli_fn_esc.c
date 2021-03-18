/*

Escape.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_fn_esc(cli_property_t(*argp))) {

auto signed char *b;
auto cli_text_t *text;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

text = (&(R(text,*argp)));
OR(R(flag,*text),CLI_QUIT);

return(0x01);
}
