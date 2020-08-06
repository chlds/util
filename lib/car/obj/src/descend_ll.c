/* **** Notes

Descend the current temporary knot position - i.e., (*argp).t in a pointer of the knot structure.

Deprecated..

di: Put the address for the current temporary knot in a pointer of the knot structure at.
si: Put the current temporary knot - or e.g., terminating i.e., (*argp).b - address of the <knot> structure at.

example:
r = descend_ll(&((*argp).t),(*argp).t);

Remarks:
Based on a doubly linked list
*/


# define C_CODE_STDS
# define CAR
# include "../../../incl/config.h"

signed(__cdecl descend_ll(KNOT(**di),KNOT(*si))) {

/* **** DATA, BSS and STACK */
auto KNOT *cache;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

/*
if(!((*si).d)) return(0x01);
// It is the leading address i.e., (*argp).l
//*/

cache = ((*si).d);
*(di) = (cache);

return(0x01);
}
