/*

Output characters based on UTF-8 to the console screen.

Remarks:
A character string should be terminated with the null character.
Refer at fn. cv_ww, fn. read_b and fn. rm_crlf to replace CR/LF with the null character.
Return the number of bytes output for characters (..or the number of characters).
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_outs_legible(signed(arg/* delay */),signed char(*argp))) {

auto signed min = (0x10);
auto signed m = (5*(1000));

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(arg) {
if(arg<(min)) arg = (min);
if(!(arg<(m))) arg = (m);
}

return(cli_outs_legible_r(arg,argp));
}
