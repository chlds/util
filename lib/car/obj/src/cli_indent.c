/*

Output white space characters to the console screen.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_indent(signed short(arg))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(0x08<(arg)) return(0x00);

r = cli_indent_r(arg);
if(!r) return(0x00);

return(0x01);
}
