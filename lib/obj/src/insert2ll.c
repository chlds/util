/* **** Notes

Insert a knot in a doubly linked list.

Refer at fn. concat2ll_for_history, fn. concat2ll, fn. cmdln_ctrl_m or..

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

signed(__cdecl insert2ll(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*t);
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);

t = ((*argp).t);

if(!((signed long long) t^((signed long long) (*argp).b))) {
// rebase (or insert back in one knot only)
(*k).s = (0x00);
(*k).d = ((*argp).b);
(*((*argp).b)).s = (k);
// also
(*argp).b = (k);
return(0x01);
}

/*
t = ((*argp).t);

if(!((signed long long) t^((signed long long) (*argp).l))) {
// insert back
(*((*((*argp).l)).s)).d = (k);
(*k).s = ((*((*argp).l)).s);
(*k).d = ((*argp).l);
(*((*argp).l)).s = (k);
return(0x01);
}
//*/

/* flow: t < k < (*t).s */
(*((*t).s)).d = (k);
(*k).s = ((*t).s);
(*k).d = (t);
(*t).s = (k);

return(0x01);
}
