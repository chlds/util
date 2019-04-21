/* **** Notes

Concatenate a knot in a circular linked list.

argp: Put the address of the <knot> structure at.

Remarks:
Based on a circular linked list (i.e., not a doubly linked list).

Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"

signed(__cdecl concat_circularll(struct knot(*argp))) {

/* **** DATA, BSS and STACK */
extern struct knot(*lead);
extern struct knot(*base);

/* **** CODE/TEXT */
if(!argp) return(NIL);

if(!lead) base = (argp);
else (*lead).d = (argp);

(*argp).s = (lead);
lead = (argp);
(*lead).d = (base);
(*base).s = (lead);

return(0x01);
}
