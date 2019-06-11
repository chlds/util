/* **** Notes

Concatenate a snapshot in a doubly linked list.

Refer at fn. concat2ll().

Remarks:
Based on a doubly linked list (i.e., not a circular linked list).
Please look at util/incl/ll.h
Implemented for vu.exe
*/


# define C_AS
# include "../../../incl/config.h"

signed(__cdecl concat2ll_for_history(SNAPSHOT(*cache),SNAPSHOT(**lead),SNAPSHOT(**base))) {

/* **** DATA, BSS and STACK */

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!lead) return(0x00);
if(!base) return(0x00);

if(!(*lead)) (*base) = (cache);
else (**lead).d = (cache);

(*cache).s = (*lead);
*lead = (cache);
(**lead).d = (0x00);

return(0x01);
}
