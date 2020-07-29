/*

Press <Ctrl-@> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta and fn. cli_in.
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_at_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG) printf("%s","<Ctrl-@>");

return(0x01);
}
