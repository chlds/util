/* **** Notes

Unmap all the pages implemented in a doubly linked list.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list)
Along with C library
//*/


# define CLI_MACRO

# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_unmap_pages(CLI_SPOOL(*argp))) {

/* **** DATA */
auto CLI_PAGE *cache;
auto signed char *p;
auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*(CLI_LEAD+(R(page,*argp))))) return(0x00);

cache = (*(CLI_LEAD+(R(page,*argp))));
*(CLI_LEAD+(R(page,*argp))) = (R(s,**(CLI_LEAD+(R(page,*argp)))));

p = (*(CLI_BASE+(R(base,*cache))));
if(!p) {
printf("%s\n","<< No memory block allocated to the current page..");
return(0x00);
}

r = ct(p);
r = embed_to(p,0x00,r);
free(p);
p = (0x00);
*(CLI_BASE+(R(base,*cache))) = (p);

//* temporarily disable..
r = cli_unmap_snapshots(&(R(history,*cache)));
if(!r) {
printf("%s\n","<< Error at fn. cli_unmap_snapshots()");
// return(0x00);
}
else {
if(CLI_DBG) printf("%s%d%s\n","Unmapped ",r," snapshots");
}
//*/

free(cache);
cache = (0x00);

return(0x01+(cli_unmap_pages(argp)));
}
