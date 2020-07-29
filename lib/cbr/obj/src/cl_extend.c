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

signed(__cdecl cl_extend(signed short(cue),signed(extra),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(extra<(0x01)) return(0x00);

r = extend(CLI_INDEX+(R(base,R(roll,*argp))),CLI_INDEX+(R(size,R(roll,*argp))),extra);
if(!r) {
printf("%s\n","<< Error at fn. extend()");
return(0x00);
}

i = (r);

r = cl_init_workspace(argp);
if(!r) {
printf("%s\n","<< Error at fn. cl_init_workspace()");
return(0x00);
}

R(gauge,R(debug,R(commandline,*argp))) = (extra);
R(gauge,R(commandline,*argp)) = (extra);

if(!cue) {
p = (*(CLI_BASE+(R(cur,R(commandline,*argp)))));
while(i) {
INC(p);
--i;
}
*(CLI_LEAD+(R(cur,R(commandline,*argp)))) = (p);
*(CLI_INDEX+(R(cur,R(commandline,*argp)))) = (p);
p = (0x00);
}

return(*(CLI_INDEX+(R(size,R(roll,*argp)))));
}
