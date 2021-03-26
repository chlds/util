/*

Coordinate and output one character based on UTF-8 to the console screen.

Remarks:
Return the number of bytes decoded out of the array.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_coord_out(signed short(arg/* align */),signed char(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(0x08<(arg)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!arg) {
printf("%s \n","<< Could not align..");
return(0x00);
}

if(!(HT^(*argp))) {
r = cli_indent(cli_reckon(arg/* align */));
if(!r) printf("%s \n","<< Error at fn. cli_indent()");
}

else {
r = cli_out(argp);
if(!r) printf("%s \n","<< Error at fn. cli_out()");
}

return(r);
}
