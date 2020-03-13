/* **** Notes

Extend the base workspace.

Remarks:
Return the number of copied bytes.
Along with C library
//*/


# define CLI_MACRO

# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_extend(signed short(channel),signed short(cue),signed(extra),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed offset;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(channel<(0x00)) return(0x00);
if(extra<(0x01)) return(0x00);
if(!argp) return(0x00);

if(channel<(CLI_WORKSPACE)) flag = (0x00);
else flag = (0x01);

if(flag) return(0x00);

/*
r = cli_emul(CLI_IN,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_emul()");
return(0x00);
}
//*/

r = extend(channel+(R(base,R(roll,*argp))),channel+(R(size,R(roll,*argp))),extra);
if(!r) {
printf("%s\n","<< Error at fn. extend()");
return(0x00);
}

offset = (r);

if(!channel) {
r = cli_init_workspace(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}
R(gauge,*argp) = (extra);
if(!cue) {
p = (*(CLI_BASE+(R(cur,*argp))));
i = (offset);
R(offset,*argp) = (i);
while(i) {
INC(p);
--i;
}
*(CLI_LEAD+(R(cur,*argp))) = (p);
*(CLI_INDEX+(R(cur,*argp))) = (p);
p = (0x00);
}}

/*
r = cli_emul(CLI_OUT,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_emul()");
return(0x00);
}
//*/

return(offset);
}
