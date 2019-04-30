/* **** Notes

Unmap a circular linked list.

argp: Put the leading address of the <knot> structure at.

Remarks:
Based on a circular linked list (i.e., not a doubly linked list).

Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl unmap2_cirll(struct knot(*argp))) {

/* **** DATA */
extern struct knot(*lead);
extern struct knot(*base);
auto struct knot(*cache);

/* **** CODE/TEXT */
if(!argp) return(NIL);

if(!((long long) argp^((long long) base))) {
free((*argp).p);
free(argp);
lead = (0x00);
base = (0x00);
return(0x01);
}

cache = (argp);
argp = (*argp).s;
free((*cache).p);
free(cache);

return(1+(unmap2_cirll(argp)));
}
