/*

Press <Ctrl-H> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_display_footer_beta, fn. cl_kb_beta and fn. cl_io_beta.
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cl_ctrl_h_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-H>");

b = (*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))));
if(EQ(b,*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))))) return(0x01);

r = cl_ctrl_b_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cl_ctrl_b_beta()");
return(0x00);
}

r = cl_ctrl_d_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cl_ctrl_d_beta()");
return(0x00);
}

return(0x01);
}
