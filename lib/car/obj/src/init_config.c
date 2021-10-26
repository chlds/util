/* **** Notes

Initialise

Remarks:
Refer at fn. cli_restore.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_config(signed(arg),config_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

// initialise
flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) AND(arg,0x00);

b = (0x00);
r = (OBJS);
while(r) {
*(--r+(R(b,*argp))) = (b);
AND(*(r+(R(flag,*argp))),0x00);
AND(*(r+(R(param,*argp))),0x00);
}

if(!arg) OR(*(CLI_BASE+(R(flag,*argp))),CLI_INIT);

return(0x01);
}
