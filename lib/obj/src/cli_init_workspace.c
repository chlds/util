/* **** Notes

Initialise workspace.

Along with C library

Remarks:
Refer at fn. cli_init_ty, cli_spool_beta and fn. cli_io_beta.
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_init_workspace(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

// initialise
R(flag,*argp) = (0x00);
R(offset,*argp) = (0x00);

r = (*(CLI_BASE+(R(size,R(roll,*argp)))));
R(gauge,R(debug,*argp)) = (r);
R(gauge,*argp) = (r);

p = (*(CLI_BASE+(R(base,R(roll,*argp)))));
R(cur,R(debug,*argp)) = (p);
i = (CLI_OBJS);
while(i) {
*(--i+(R(cur,*argp))) = (p);
}

return(0x01);
}
