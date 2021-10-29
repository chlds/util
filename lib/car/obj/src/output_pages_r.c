/* **** Notes

Output.

Remarks:
Refer at fn. cv_ww, cv_v and rl_v.
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl output_pages_r(signed short(arg/* align */),page_t(*argp))) {

auto signed char *b;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
if(!b) return(0x00);

cli_outs_b(arg,b);
argp = (*(CLI_DI+(R(page,*argp))));
// if(!(cli_es(CTRL_K))) return(0x00);

if(!(cli_o_b("\n"))) return(0x00);

return(0x01+(output_pages_r(arg,argp)));
}
