/*

Output white space characters to the console screen.

Remarks:
Refer at fn. cli_indent.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_align(signed short(arg))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(0x08<(arg)) return(0x00);

r = cli_align_r(arg);
if(!r) return(0x00);

return(0x01);
}
