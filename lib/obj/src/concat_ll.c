/* **** Notes

Concatenate a knot in a doubly linked list.

argp: Put the address of the <knot> structure at.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list).
Please look at util/incl/ll.h
*/


# define C_AS
# include "../../../incl/config.h"

signed(__cdecl concat_ll(struct knot(*argp))) {

/* **** DATA, BSS and STACK */
extern struct knot(*lead);
extern struct knot(*base);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!lead) base = (argp);
else (*lead).d = (argp);

(*argp).s = (lead);
lead = (argp);
(*lead).d = (0x00);

return(0x01);
}
