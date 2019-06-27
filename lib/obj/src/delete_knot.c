/* **** Notes

Delete a knot in a doubly linked list

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

signed(__cdecl delete_knot(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);

/*
if(!((*argp).l)) return(0x00);

cache = ((*argp).l);
if(!((signed long long) cache^((signed long long) (*argp).b))) return(0x00);
//*/

cache = ((*k).d);
if(!((signed long long) cache^((signed long long) (*k).s))) {
// not unmap
(*argp).b = (k);
(*argp).t = (k);
(*argp).l = (k);
return(0x01);
}

if(!((*k).s)) {
// rebase by deleting i.e., not by inserting, refer at fn. rebase2ll
(*((*k).d)).s = (KNOT*) (0x00);
(*argp).b = ((*k).d);
(*argp).t = ((*k).d);
// and copy to the workspace
r = cpy((*argp).init_p,(*((*k).d)).p);
}

else {
if(!((*k).d)) {

// Aux.
if(!((*k).s)) return(0x01);
(*((*k).s)).d = (KNOT*) (0x00);
/* feed back to the workspace,
also refer at fn. cmdln_ctrl_d
to set the departure coordinates to the workspace
and to the current knot associated with the one.
*/
(*argp).t = ((*k).s);
(*argp).l = ((*k).s);
// and copy to the workspace
r = cpy((*argp).init_p,(*((*k).s)).p);
// to set the caret pos., refer at fn. cmdln_ctrl_d and incl/cmdln.h.
(*argp).lead_back = (0x01);

/* ..or not unmap a knot (and the message)
return(0x01);
//*/
}
else {
(*((*k).s)).d = ((*k).d);
(*((*k).d)).s = ((*k).s);
(*argp).t = ((*k).d);
// and copy to the workspace
r = cpy((*argp).init_p,(*((*k).d)).p);
}}

free((*k).p);
free(k);

return(0x01);
}
