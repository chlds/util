/* **** Notes

Absorb a knot in a doubly linked list.

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

signed(__cdecl absorb2ll(KNOT(*cache),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*t);

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

t = ((*argp).t);

if(!t) return(0x00); // go to fn. concat2ll()
if(!((*t).s)) return(0x00); // go to fn. rebase2ll()

/* flow: t < cache < (*t).s */
(*((*t).s)).d = (cache);
(*cache).s = ((*t).s);
(*cache).d = (t);
(*t).s = (cache);

return(0x01);
}
