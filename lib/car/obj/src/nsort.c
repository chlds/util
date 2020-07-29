/* **** Notes

Sort e.g., using with fn. bsort()

count: Put the numbre of the elements for an array of values at.
base: Put the leading address of an array of values at.
*/


# include "./../../../incl/config.h"

signed int(__cdecl nsort(signed int(count), signed int(*base))) {

/* **** DATA, BSS, STACK */
auto signed int(cache);

/* **** **** CODE/TEXT */
if(!count) return(NIL);
if(!base) return(NIL);

if(!(--count)) return(NIL);

cache = (*base++);
if(cache<(*base)) {
}
else {
*(base+(~(NIL))) = (*base);
*base = (cache);
}

return(1+(nsort(count, base)));
}
