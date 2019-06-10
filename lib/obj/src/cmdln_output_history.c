/* **** Notes

Output content in a doubly linked list.

argp: Put the leading address of the <knot> structure at.

Remarks:
Please look at util/incl/ll.h
//*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_output_history(CMDLN_STAT(*argp))) {

/* **** DATA */
auto struct knot(*cache);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(NIL);

r = catll((*argp).clih.l);

return(r);
}
