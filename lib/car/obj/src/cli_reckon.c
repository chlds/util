/*

Reckon.

Remarks:
Escape sequences
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_reckon(signed short(arg/* align */))) {

auto signed char *b;
auto coord_t coord;
auto signed i,r;
auto signed short x;
auto signed short flag;

if(arg<(0x01)) return(0x00);
if(0x08<(arg)) return(0x00);

r = coord_report(CLI_RULE,&coord);
if(!r) return(0x00);

x = (*(CLI_BASE+(R(x,coord))));
if(!x) return(0x00);

--x;
x = (x%(arg));
x = (arg+(0x01+(~x)));

r = (signed) (x);

return(r);
}
