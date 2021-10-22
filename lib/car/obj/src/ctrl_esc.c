/*

Escape.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_esc(ty_t(*argp))) {

auto signed char *b;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

// page = (&(R(page,*argp)));
OR(*(CLI_BASE+(R(flag,*argp))),CLI_QUIT);

return(0x01);
}
