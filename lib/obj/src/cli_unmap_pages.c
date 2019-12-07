/* **** Notes

Unmap all the pages implemented in a doubly linked list.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list)
Along with C library
//*/


# define R(D,S) (S).D
// A local macro function

# include "../../../incl/cli.h"
# include <stdlib.h>

signed(__cdecl cli_unmap_pages(CLI_SPOOL(*argp))) {

/* **** DATA */
auto signed char *p;
auto CLI_PAGE *cache;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*(CLI_LEAD+(R(page,*argp))))) return(0x00);

cache = (*(CLI_LEAD+(R(page,*argp))));
*(CLI_LEAD+(R(page,*argp))) = (R(s,**(CLI_LEAD+(R(page,*argp)))));

p = (*(CLI_BASE+(R(base,*cache))));
if(p) {
free(p);
*(CLI_BASE+(R(base,*cache))) = (0x00);
p = (0x00);
}

free(cache);
cache = (0x00);

return(0x01+(cli_unmap_pages(argp)));
}
