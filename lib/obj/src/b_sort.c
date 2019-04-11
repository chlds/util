/* **** Notes

A bubble sort

fn. b_sort() implemented with fn. n_sort().

count: Put the numbre of the elements for an array of values at.
base: Put the leading address of an array of values at.
*/


# include "./../../../incl/config.h"

int signed(__cdecl b_sort(int signed(count), int signed(*base))) {

/* **** DATA, BSS and STACK */
auto int signed(r);

/* **** CODE/TEXT */
if(!count) return(NIL);
if(!base) return(NIL);

r = n_sort(count, base);

if(!r) return(NIL);

return(1+(b_sort(--count, base)));
}
