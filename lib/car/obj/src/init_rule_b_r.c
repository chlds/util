/* **** Notes

Initialise

Remarks:
Refer at fn. init_rule_b.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl init_rule_b_r(signed short(flag),signed(arg),rule_t(*argp))) {

auto signed char *b;
auto signed i,r;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

--arg;
r = init_rule_b(flag,arg+(argp));
if(!r) return(0x00);

return(r+(init_rule_b_r(flag,arg,argp)));
}
