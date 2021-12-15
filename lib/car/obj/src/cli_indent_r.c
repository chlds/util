/*

Output white space characters to the console screen.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_indent_r(signed short(arg))) {

auto signed char *b = (" ");
auto signed i,r;
auto signed short flag;

if(!arg) return(0x00);

r = cli_o_b(0x01,b);
if(!r) return(0x00);

return(r+(cli_indent_r(--arg)));
}
