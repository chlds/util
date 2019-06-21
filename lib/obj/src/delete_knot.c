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

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);


/*
if(!((*argp).l)) return(0x00);

cache = ((*argp).l);
if(!((signed long long) cache^((signed long long) (*argp).b))) return(0x00);
//*/


cache = ((*k).d);
if(!((signed long long) cache^((signed long long) (*k).s))) return(0x01);


if(!((*k).s)) {
// rebase by deleting i.e., not by inserting, refer at fn. rebase2ll
(*argp).b = ((*k).d);
(*argp).t = ((*k).d);
(*((*k).d)).s = (KNOT*) (0x00);
}

else {
if(!((*k).d)) {
return(0x01);
}
else {
(*argp).t = ((*k).d);
(*((*k).s)).d = ((*k).d);
(*((*k).d)).s = ((*k).s);
}}

free((*k).p);
free(k);

return(0x01);
}
