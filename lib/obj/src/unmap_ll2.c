/* **** Notes

Unmap a doubly linked list.

argp: Put the leading address of the <knot> structure at.

Remarks:
Please look at util/incl/ll.h
//*/


# define C_AS
# include <stdlib.h>
# include "../../../incl/config.h"

signed int(__cdecl unmap_ll2(struct knot(*argp))) {

/* **** DATA */
auto struct knot(*cache);

/* **** CODE/TEXT */
if(!argp) return(NIL);

cache = (argp);
argp = (*argp).s;
free((*cache).p);
free(cache);

return(1+(unmap_ll2(argp)));
}
