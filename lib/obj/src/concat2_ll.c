/* **** Notes

Concatenate a knot in a doubly linked list.

argp: Put the address of the <knot> structure at.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list).

Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"

signed int(__cdecl concat2_ll(struct knot(*cache), struct pknot(*argp))) {

/* **** CODE/TEXT */
if(!cache) return(NIL);
if(!argp) return(NIL);

if(!((*argp).l)) (*argp).b = (cache);
else (*((*argp).l)).d = (cache);

(*cache).s = (*argp).l;
(*argp).l = (cache);
(*((*argp).l)).d = (NIL);

return(0x01);
}
