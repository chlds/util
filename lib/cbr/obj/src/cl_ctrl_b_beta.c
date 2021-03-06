/*

Press <Ctrl-B> to invoke the function.

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

signed(__cdecl cl_ctrl_b_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *cur,*b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-B>");

b = (*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))));
if(EQ(b,*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))))) return(0x01);

while(0x01) {
--b;
r = nbytechar(*b);
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}
if(r^(0x80)) break;
}

cur = (*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));

r = cl_ctrl_a_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cl_ctrl_a_beta()");
return(0x00);
}

while(0x01) {
if(cur<(b)) {
r = cli_coord_out_beta(0x00/* wrap */,cur,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}}
else break;
cur = (cur+(r));
}

*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))) = (cur);

return(0x01);
}
