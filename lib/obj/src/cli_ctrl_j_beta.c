/*

Press <Ctrl-J> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta and fn. cli_ctrl_b_beta.
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_j_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *cur,*p;
auto signed long long ll;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-J>");

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ll = ((signed long long) p);
if(!(ll^((signed long long) *(CLI_BASE+(R(base,R(roll,R(ty,*argp)))))))) return(0x01);

r = cpy(*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))),p);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

r = cli_ctrl_r_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_r_beta()");
return(0x00);
}

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

r = cpy(p,*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

r = cli_clear_rows_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}

r = cli_output_beta(0x01,p,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_output_beta()");
return(0x00);
//*/
}

return(0x01);
}
