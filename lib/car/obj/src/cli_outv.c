/* **** Notes

Output.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_outv(signed char(**argp))) {

auto signed char b = (LF);

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

cli_outs(*argp);
cli_out(&b);

argp++;
return(0x01+(cli_outv(argp)));
}
