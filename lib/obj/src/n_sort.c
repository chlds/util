/* **** Notes

Sort e.g., using with fn. b_sort()

count: Put the numbre of the elements for an array of values at.
base: Put the leading address of an array of values at.
*/


# include "./../../../incl/config.h"

int signed(__cdecl n_sort(int signed(count), int signed(*base))) {

/* **** DATA, BSS, STACK */
auto int signed(cache);
auto int signed(craft);

/* **** **** CODE/TEXT */
if(!count) return(NIL);
if(!base) return(NIL);

if(!(--count)) return(NIL);

craft = (*base++);
if(craft<(*base)) {
}
else {
cache = (*base);
*base = (craft);
*(base+(~(NIL))) = (cache);
}

return(1+(n_sort(count, base)));
}
