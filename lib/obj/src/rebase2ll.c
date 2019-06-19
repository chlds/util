/* **** Notes

Rebase a knot in a doubly linked list.

Refer at fn. concat2ll_for_history, fn. concat2ll, fn. absorb2ll, fn. rebase2ll and fn. add2ll.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list).
Please look at util/incl/ll.h and util/incl/cmdln.h
Implemented for vu.exe
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl rebase2ll(KNOT(*cache),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!((*argp).b)) return(0x01);

(*cache).s = (KNOT*) (0x00);
(*cache).d = ((*argp).b);
(*((*argp).b)).s = (cache);

(*argp).b = (cache);

return(0x01);
}
