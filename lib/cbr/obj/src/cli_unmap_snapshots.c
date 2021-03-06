/* **** Notes

Unmap all the snapshots implemented in a doubly linked list.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list)
Along with C library
//*/


# define CBR

# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_unmap_snapshots(cli_history_t(*argp))) {

/* **** DATA */
auto cli_snapshot_t *cache;
auto signed char *p;
auto signed i,r;

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

r = ct(p);
r = embed(r,p);
free(p);
p = (0x00);
*(CLI_BASE+(R(base,*cache))) = (p);

free(cache);
cache = (0x00);

return(0x01+(cli_unmap_snapshots(argp)));
}
