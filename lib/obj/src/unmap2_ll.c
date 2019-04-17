/* **** Notes

Unmap a doubly linked list.

argp: Put the leading address of the <knot> structure at.

Remarks:
Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"
# include <stdlib.h>

signed int(__cdecl unmap2_ll(struct knot(*argp))) {

/* **** DATA */
auto struct knot(*cache);

/* **** CODE/TEXT */
if(!argp) return(NIL);

cache = (argp);
argp = (*argp).s;
free((*cache).p);
free(cache);

return(1+(unmap2_ll(argp)));
}
