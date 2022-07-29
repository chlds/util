/* **** Notes

Output.

Remarks:
Refer at fn. cv_ww, cv_v and rl_v.
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_outv(signed char(**argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

cli_outs(*argp);
argp++;
// if(!(es(CTRL_K))) return(0x00);

return(0x01+(cli_outv_r(argp)));
}
