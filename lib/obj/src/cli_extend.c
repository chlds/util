/* **** Notes

Extend workspace.

Remarks:
Based on fn. extend and fn. recharge
Along with C library
//*/


# define CLI_MACRO

# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_extend(signed short(cue),signed(extra),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(extra<(0x01)) return(0x00);

r = extend(CLI_BASE+(R(base,R(roll,*argp))),CLI_BASE+(R(size,R(roll,*argp))),extra);
if(!r) {
printf("%s\n","<< Error at fn. extend()");
return(0x00);
}

i = (r);

r = cli_init_workspace(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}

R(gauge,R(debug,*argp)) = (extra);
R(gauge,*argp) = (extra);

if(!cue) {
p = (*(CLI_BASE+(R(cur,*argp))));
R(offset,*argp) = (i);
while(i) {
INC(p);
--i;
}
*(CLI_LEAD+(R(cur,*argp))) = (p);
*(CLI_INDEX+(R(cur,*argp))) = (p);
p = (0x00);
}

return(*(CLI_BASE+(R(size,R(roll,*argp)))));
}
