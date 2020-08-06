/* **** Notes

Initialise workspace.

Along with C library

Remarks:
Refer at fn. cli_init_ty, cli_spool_beta and fn. cli_io_beta.
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cl_init_workspace(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

// initialise
// R(offset,R(commandline,*argp)) = (0x00);
// R(flag,R(commandline,*argp)) = (0x00);

r = (*(CLI_INDEX+(R(size,R(roll,*argp)))));
R(gauge,R(debug,R(commandline,*argp))) = (r);
R(gauge,R(commandline,*argp)) = (r);

p = (*(CLI_INDEX+(R(base,R(roll,*argp)))));
R(cur,R(debug,R(commandline,*argp))) = (p);
i = (CLI_OBJS);
while(i) {
*(--i+(R(cur,R(commandline,*argp)))) = (p);
}

return(0x01);
}
