/* **** Notes

Unmap all the snapshots implemented in a doubly linked list.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list)
Along with C library
//*/


# define R(D,S) (S).D
// A local function/object-like macro

# include "../../../incl/cli.h"
# include <stdlib.h>

signed(__cdecl cli_unmap_snapshots(CLI_HISTORY(*argp))) {

/* **** DATA */
auto signed char *p;
auto CLI_SNAPSHOT *cache;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*(CLI_LEAD+(R(snapshot,*argp))))) return(0x00);

cache = (*(CLI_LEAD+(R(snapshot,*argp))));
*(CLI_LEAD+(R(snapshot,*argp))) = (R(s,**(CLI_LEAD+(R(snapshot,*argp)))));

p = (*(CLI_BASE+(R(base,*cache))));
if(!p) {
printf("%s\n","<< No memory block allocated to the current snapshot..");
return(0x00);
}

free(p);
p = (0x00);
*(CLI_BASE+(R(base,*cache))) = (0x00);

free(cache);
cache = (0x00);

return(0x01+(cli_unmap_snapshots(argp)));
}
