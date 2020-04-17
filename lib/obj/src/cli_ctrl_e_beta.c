/*

Press <Ctrl-E> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_e_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *cur,*p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-E>");

p = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
*(CLI_LEAD+(R(cur,R(ty,*argp)))) = (p);

r = ct(p);
while(r) {
INC(*(CLI_LEAD+(R(cur,R(ty,*argp)))));
--r;
}

ll = ((signed long long) *(CLI_LEAD+(R(cur,R(ty,*argp)))));
if(!(ll^((signed long long) *(CLI_INDEX+(R(cur,R(ty,*argp))))))) {
r = cli_ctrl_n_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_n_beta()");
return(0x00);
}
return(0x01);
}

r = cli_output_beta(0x00/* a comeback flag */,*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_output_beta()");
return(0x00);
}

// ADD(R(gauge,R(ty,*argp)),-r);

while(r) {
INC(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
--r;
}

return(0x01);
}
