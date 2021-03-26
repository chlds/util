/*

Coordinate and output characters based on UTF-8 to the console screen.

Remarks:
Return the number of bytes output for characters (..or the number of characters).
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_coord_outs(signed short(arg/* align */),signed char(*argp))) {

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

r = cli_coord_out(arg,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_out()");
return(0x00);
}

argp = (r+(argp));

// e.g., r = (0x01);
return(r+(cli_coord_outs(arg,argp)));
}
