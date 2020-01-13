/* **** Notes

Unmap all the rolls.

Remarks:
Along with C library
//*/


# define CLI_MACRO

# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_unmap_rolls(CLI_ROLL(*argp))) {

/* **** DATA */
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

i = (CLI_WORKSPACE);
while(i) {
free(*(--i+(R(base,*argp))));
*(i+(R(base,*argp))) = (0x00);
}

return(CLI_WORKSPACE);
}
