/* **** Notes

Release.

Remarks:
Refer at fn. init_rule.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl unmap_rule(rule_t(*argp))) {

auto signed char *b;
auto signed r;

if(!argp) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
embed(0x00,b);
if(b) rl(b);

b = (0x00);
r = (CLI_OBJS);
while(r) *(--r+(R(b,*argp))) = (b);

return(0x01);
}
