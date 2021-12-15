/* **** Notes

Initialise

Remarks:
Refer at fn. init_rule_b.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl init_rule(signed short(flag),signed(arg),rule_t(*argp))) {

auto signed char *b;
auto signed i,r;

if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

if(arg<(CLI_RULE)) return(init_rule_b(flag,arg+(argp)));

r = init_rule_b_r(flag,CLI_RULE,argp);
if(CLI_RULE^(r)) AND(r,0x00);

return(r);
}
