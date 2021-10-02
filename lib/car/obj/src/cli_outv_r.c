/* **** Notes

Output.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_outv_r(signed char(**argp))) {

auto signed char b = (LF);

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

cli_out(&b);
cli_outs(*argp);
argp++;
// if(!(cli_es(CTRL_K))) return(0x00);

return(0x01+(cli_outv_r(argp)));
}
