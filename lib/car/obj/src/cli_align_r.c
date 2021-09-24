/*

Output white space characters to the console screen.

Remarks:
Refer at fn. cli_indent_r.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_align_r(signed short(arg))) {

auto signed char *b = (" ");
auto signed i,r;
auto signed short flag;

if(!arg) return(0x00);

r = cli_o(b);
if(!r) return(0x00);

return(r+(cli_align_r(--arg)));
}
