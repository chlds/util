/* **** Notes

Initialise

Remarks:
Refer at fn. cli_restore.
*/


# define CAR
# include <stdlib.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_init_boil(signed(arg),cli_b_t(*argp))) {

auto signed char *b;
auto signed i,r;

if(!argp) return(0x00);

// initialise
if(!(CLI_INIT&(R(flag,*argp)))) AND(arg,0x00);

// destroy
if(arg) {
b = (*(CLI_BASE+(R(base,*argp))));
embed(0x00,b);
if(b) free(b);
}

b = (0x00);
i = (CLI_OBJS);
while(i) *(--i+(R(base,*argp))) = (b);
R(optl,*argp) = (0x00);
AND(r,0x00);
AND(R(flag,*argp),0x00);
if(!arg) OR(R(flag,*argp),CLI_INIT);
OR(r,0x01);

return(r);
}
