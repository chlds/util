/*

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_rule(signed char(*cur),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *base,*p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

base = (*(CLI_BASE+(R(base,R(roll,*argp)))));
if(cur<(base)) return(0x00);

*(CLI_BASE+(R(cur,*argp))) = (base);
*(CLI_LEAD+(R(cur,*argp))) = (base);
r = ct(base);
i = (-r+(*(CLI_BASE+(R(size,R(roll,*argp))))));
if(i<(CLI_EMPTY)) return(0x00);
R(gauge,*argp) = (i);
while(r) {
INC(*(CLI_LEAD+(R(cur,*argp))));
--r;
}

*(CLI_INDEX+(R(cur,*argp))) = (cur);

*(CLI_OFFSET+(R(cur,*argp))) = (base);

return(0x01);
}
