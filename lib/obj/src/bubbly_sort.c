/* **** Notes

Bubbly sort

di: Put the numbre for elements of an array of values at.
si: Put the leading address of an array of values at.

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


/* **** **** entry point */
char signed(__cdecl bubbly_sort(int signed(di), int signed(*si))) {

/* **** **** DATA */
static int signed(cache) = (NIL);
auto char signed(c);

/* **** **** CODE/TEXT */
if(!di) return(NIL);
if(!si) return(NIL);

if(cache<(di+(~(NIL)))) {
c = bsort(di+(~(cache++)), (di), (si));
if(!c) {
printf("%s\n", ("Error at fn. bsort()."));
XOR(cache, cache);
return(NIL);
}}

else {
// Monitoring
// printf("%s%d\n", ("<< cache is: "), (cache));
XOR(cache, cache);
return(NIL);
}

return(1+(bubbly_sort(di, (si))));
}
