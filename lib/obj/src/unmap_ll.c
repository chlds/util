/* **** Notes

Unmap a doubly linked list.

argp: Put the leading address of the <knot> structure at.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list).

Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"
# include <stdlib.h>

signed int(__cdecl unmap_ll(struct knot(*argp))) {

/* **** DATA */
auto void(*cache);

/* **** CODE/TEXT */
if(!argp) return(NIL);

cache = (argp);
argp = (*argp).s;
free(cache);

return(1+(unmap_ll(argp)));
}
