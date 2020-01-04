/*

Press <Ctrl-F> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_display_footer_beta, fn. cl_kb_beta and fn. cl_io_beta.
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cl_ctrl_f_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-F>");

p = (*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
*(CLI_LEAD+(R(cur,R(commandline,R(ty,*argp))))) = (p);

r = ct(p);
while(r) {
INC(*(CLI_LEAD+(R(cur,R(commandline,R(ty,*argp))))));
--r;
}

ll = ((signed long long) *(CLI_LEAD+(R(cur,R(commandline,R(ty,*argp))))));
if(!(ll^((signed long long) *(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp)))))))) return(0x01);

r = cli_col_out_beta(*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_col_out_beta()");
return(0x00);
}

// ADD(R(gauge,R(commandline,R(ty,*argp))),-r);

while(r) {
INC(*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))));
--r;
}

return(0x01);
}
