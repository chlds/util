/*

Press <Ctrl-]> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cl_io_beta.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cl_ctrl_rsb_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-]>");

p = (*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))));
ll = ((signed long long) p);
if(!(ll^((signed long long) *(CLI_INDEX+(R(base,R(roll,R(ty,*argp)))))))) return(0x01);

return(0x01);
}
