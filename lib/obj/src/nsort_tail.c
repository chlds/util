/* **** Notes

fn. nsort_tail()

e.g., refer at fn. nsort().

count: Put the numbre of the elements for an array of values at.
base: Put the leading address of an array of values at.

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


/* **** **** entry point */
char signed(__cdecl nsort_tail(int signed(count), int signed(*base))) {

/* **** **** BSS, STACK */
auto int signed(craft);
auto char signed(c);

/* **** **** CODE/TEXT */
if(!count) return(NIL);
if(!base) return(NIL);

if(!(--count)) return(NIL);

craft = (*(base+(count)));

if(craft<(*(base+(count+(~(NIL)))))) {
c = sw(base+(count), base+(count+(~(NIL))));
if(!c) return(NIL);
}

return(1+(nsort(count, base)));
}
