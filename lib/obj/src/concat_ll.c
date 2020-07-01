/* **** Notes

Concatenate a knot in a circular/doubly linked list.

flag: 0x00 is in a doubly linked list and the others are in a circular linked list.
argp: Put the address of the <knot> structure at.

Remarks:
Please look at util/incl/ll.h
*/


# define C_AS
# include "../../../incl/config.h"

signed(__cdecl concat_ll(signed short(flag),struct knot(*argp))) {

/* **** DATA, BSS and STACK */
extern struct knot(*lead);
extern struct knot(*base);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!lead) base = (argp);
else (*lead).d = (argp);

(*argp).s = (lead);
lead = (argp);

if(!flag) (*lead).d = (0x00);
else {
(*lead).d = (base);
(*base).s = (lead);
}

return(0x01);
}
