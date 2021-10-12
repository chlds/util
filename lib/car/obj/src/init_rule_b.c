/* **** Notes

Initialise

Remarks:
Refer at fn. init_rule.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_rule_b(signed short(arg),cli_rule_t(*argp))) {

auto signed char *b;
auto signed i,r;

if(!argp) return(0x00);

// destroy
if(arg) {
b = (*(CLI_BASE+(R(b,*argp))));
embed(0x00,b);
if(b) rl(b);
}

b = (0x00);
i = (CLI_OBJS);
while(i) *(--i+(R(b,*argp))) = (b);

return(0x01);
}
