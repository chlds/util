/* **** Notes

fn. bubblysort() implemented with fn. nsort() and fn. sw().

count: Put the numbre of the elements for an array of values at.
base: Put the leading address of an array of values at.

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


/* **** **** entry point */
int signed(__cdecl bubblysort(int signed(count), int signed(*base))) {

auto int signed(craft);
auto int signed(r);

/* **** **** CODE/TEXT */
if(!count) return(NIL);
if(!base) return(NIL);

if(!(count+(~(NIL)))) return(NIL);

r = nsort(count, base);

if(!r) return(NIL);

return(1+(bubblysort(--count, base)));
}
