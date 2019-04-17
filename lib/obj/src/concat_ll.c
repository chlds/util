/* **** Notes

Concatenate a knot in a doubly linked list.

argp: Put the address of the <knot> structure at.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list).

Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"

signed int(__cdecl concat_ll(struct knot(*argp))) {

/* **** DATA, BSS and STACK */
extern struct knot(*lead);
extern struct knot(*base);

/* **** CODE/TEXT */
if(!argp) return(NIL);

if(!lead) base = (argp);
else (*lead).d = (argp);

(*argp).s = (lead);
lead = (argp);
(*lead).d = (NIL);

return(0x01);
}
