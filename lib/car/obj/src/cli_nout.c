/*

Output characters based on UTF-8 to the console screen.

Remarks:
Return the number of bytes output for characters (..or the number of characters).
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_nout(signed(arg),signed char(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = cli_outs(argp);
if(!r) return(0x00);

return(r+(cli_nout(--arg,argp)));
}
