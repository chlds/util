/* **** Notes

Ascend.

di: Put the address for a pointer of the knot structure at.
argp: Put the - e.g., leading - address of the <knot> structure at.

Remarks:
Based on a doubly linked list
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl ascend_ll(KNOT(**di), KNOT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = ((*argp).s);
*(di) = (cache);

return(0x01);
}
