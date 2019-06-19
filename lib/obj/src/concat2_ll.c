/* **** Notes

Concatenate a knot in a doubly linked list (for general purpose).

cache: Put the address of the <knot> structure at.
argp: Put the address of the <knots> structure at.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list).
Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"

signed(__cdecl concat2_ll(KNOT(*cache), KNOTS(*argp))) {

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!((*argp).l)) (*argp).b = (cache);
else (*((*argp).l)).d = (cache);

(*cache).s = ((*argp).l);
(*argp).l = (cache);
(*((*argp).l)).d = (0x00);

return(0x01);
}
