/*

Press <Ctrl-H> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_h_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-H>");

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(EQ(p,*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))))) {
//* aux.
page = *(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))));
if(!(EQ(page,*(CLI_BASE+(R(page,R(spool,R(ty,*argp)))))))) {
r = cli_ctrl_u_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_u_beta()");
return(0x00);
}
r = cli_to_eol_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_to_eol_beta()");
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
