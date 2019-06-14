/* **** Notes

Output content in a doubly linked list.

Remarks:
Please look at util/incl/ll.h
//*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_output(CMDLN_STAT(*argp))) {

/* **** DATA */
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cat_ll_and_histories((*argp).l);

return(r);
}
