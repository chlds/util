/* **** Notes

Output.

Remarks:
A character string should be terminated with the null character.
Refer at fn. cv_ww, fn. read_b and fn. rm_crlf to replace CR/LF with the null character.
Return the number of rows output for characters (..or the number of characters).
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_outv_legible(signed(arg),signed char(**argp))) {

auto signed char b = (LF);
auto signed min = (0x10);
auto signed m = (1000);

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(arg<(min)) arg = (min);
if(!(arg<(m))) arg = (m);

sleep_b(arg);
cli_outs_legible(arg,*argp);
cli_out(&b);

argp++;
return(0x01+(cli_outv_legible(arg,argp)));
}
