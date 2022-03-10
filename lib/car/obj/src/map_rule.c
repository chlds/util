/* **** Notes

Allocate.

Remarks:
Refer at fn. init_rule.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl map_rule(signed(arg),rule_t(*argp))) {

auto signed char *b;
auto signed r;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
if(b) return(0x00);

b = (signed char(*)) alloc(arg);
if(!b) return(0x00);

r = (CLI_OBJS);
while(r) *(--r+(R(b,*argp))) = (b);

return(arg);
}
