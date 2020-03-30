/*

Press <Ctrl-H> to invoke the function.

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

signed(__cdecl cli_ctrl_h_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-H>");

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ll = ((signed long long) p);
if(!(ll^((signed long long) *(CLI_BASE+(R(base,R(roll,R(ty,*argp)))))))) {
//* aux.
ll = ((signed long long) *(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
if(ll^((signed long long) *(CLI_BASE+(R(page,R(spool,R(ty,*argp))))))) {
r = cli_ctrl_u_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_u_beta()");
return(0x00);
}
r = cli_ctrl_e_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_e_beta()");
return(0x00);
}
r = cli_ctrl_d_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_d_beta()");
return(0x00);
}}
//*/
return(0x01);
}

r = cli_ctrl_b_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_b_beta()");
return(0x00);
}

r = cli_ctrl_d_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_d_beta()");
return(0x00);
}

return(0x01);
}
