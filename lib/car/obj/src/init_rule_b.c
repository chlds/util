/* **** Notes

Initialise

Remarks:
Refer at fn. init_rule.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_rule_b(signed short(arg),rule_t(*argp))) {

auto signed char *b;
auto signed r;

if(!argp) return(0x00);

if(arg) return(unmap_rule(argp));

b = (0x00);
r = (CLI_OBJS);
while(r) *(--r+(R(b,*argp))) = (b);

return(0x01);
}
