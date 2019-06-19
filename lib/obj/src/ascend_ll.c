/* **** Notes

Ascend the current temporary knot position - i.e., (*argp).t in a pointer of the knot structure.

Deprecated..

di: Put the address for the current temporary knot i.e., (*argp).t in a pointer of the knot structure at.
si: Put the current temporary knot - or e.g., leading i.e., (*argp).l - address of the <knot> structure at.

example:
r = ascend_ll(&((*argp).t),(*argp).t);

Remarks:
Based on a doubly linked list
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl ascend_ll(KNOT(**di), KNOT(*si))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(!((*si).s)) return(0x01);
// It is at the terminating address i.e., (*argp).b

cache = ((*si).s);
*(di) = (cache);

return(0x01);
}
