/* **** Notes

Unmap all the rolls.

Remarks:
Along with C library
//*/


# define CBR

# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_unmap_rolls(CLI_ROLL(*argp))) {

/* **** DATA */
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

i = (CLI_WORKSPACE);
while(i) {
p = (*(--i+(R(base,*argp))));
r = embed_to(p,0x00,*(i+(R(size,*argp))));
free(p);
p = (0x00);
*(i+(R(base,*argp))) = (p);
}

return(CLI_WORKSPACE);
}
