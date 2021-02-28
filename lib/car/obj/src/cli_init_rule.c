/* **** Notes

Initialise

Remarks:
Refer at fn. cli_restore.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_init_rule(signed(arg),cli_rule_t(*argp))) {

auto signed char *b;
auto signed i,r;

if(!argp) return(0x00);

// initialise
if(!(CLI_INIT&(R(flag,*argp)))) AND(arg,0x00);

// destroy
if(arg) {
AND(arg,0x00);
b = (*(CLI_BASE+(R(b,*argp))));
embed(0x00,b);
if(b) rl(b);
}

b = (0x00);
i = (CLI_OBJS);
while(i) *(--i+(R(b,*argp))) = (b);
R(optl,*argp) = (0x00);
AND(r,0x00);
AND(R(flag,*argp),0x00);
if(!arg) OR(R(flag,*argp),CLI_INIT);
OR(r,0x01);

return(r);
}
