/* **** Notes

Add a knot in a doubly linked list.

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

signed(__cdecl add2ll(KNOT(*cache),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*t);
auto signed(r);

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

t = ((*argp).t);

if(!t) {
r = concat2ll(cache,argp);
if(!r) printf("%s", "<< Error at fn. concat2ll()");
return(0x00);
}

else {
if(!((signed long long) t^((signed long long) (*argp).b))) {
r = rebase2ll(cache,argp);
if(!r) printf("%s", "<< Error at fn. rebase2ll()");
return(0x00);
}
else {
r = absorb2ll(cache,argp);
if(!r) printf("%s", "<< Error at fn. absorb2ll()");
return(0x00);
}}

return(0x01);
}
