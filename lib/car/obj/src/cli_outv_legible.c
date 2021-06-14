/* **** Notes

Output.
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
