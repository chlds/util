/* **** Notes

Concatenate a knot in a doubly linked list (of the CMDLN_STAT structure i.e., directly concatenate with the CMDLN_STAT structure).

Refer at fn. concat2_ll

Also refer at fn. concat2ll_for_history, fn. insert2ll, fn. cmdln_ctrl_m or..

Remarks:
Based on a doubly linked list (i.e., not a circular linked list).
Please look at util/incl/ll.h
Implemented for vu.exe
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl concat2ll(KNOT(*cache),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!((*argp).l)) (*argp).b = (cache);
else (*((*argp).l)).d = (cache);

(*cache).s = ((*argp).l);
(*argp).l = (cache);
(*((*argp).l)).d = (0x00);

/* Update the delegate list - argp - in the CMDLN_STAT structure */
(*argp).t = (KNOT*) ((*argp).l);

/* Initialise snapshots for the CLI history */
(*cache).clih.l = (SNAPSHOT*) (0x00);
(*cache).clih.t = (SNAPSHOT*) (0x00);
(*cache).clih.b = (SNAPSHOT*) (0x00);

return(0x01);
}
