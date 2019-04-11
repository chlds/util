/* **** Notes

A bubble sort

implemented with fn. nsort().

count: Put the numbre of the elements for an array of values at.
base: Put the leading address of an array of values at.
*/


# include "./../../../incl/config.h"

int signed(__cdecl bsort(int signed(count), int signed(*base))) {

/* **** DATA, BSS and STACK */
auto int signed(r);

/* **** CODE/TEXT */
if(!count) return(NIL);
if(!base) return(NIL);

r = nsort(count, base);

if(!r) return(NIL);

return(1+(bsort(--count, base)));
}
