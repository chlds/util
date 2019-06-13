/* **** Notes

Output content in a doubly linked list for history.

Deprecated..

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
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(NIL);

r = cat_history((*argp).clih.l);

return(r);
}
