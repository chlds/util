/* **** Notes

A bubble sort

implemented with fn. nsort().

count: Put the numbre of the elements for an array of values at.
base: Put the leading address of an array of values at.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl bsort(signed(count),signed(*base))) {

/* **** DATA, BSS and STACK */
auto signed r;

/* **** CODE/TEXT */
if(!count) return(0x00);
if(!base) return(0x00);

r = nsort(count,base);

if(!r) return(0x00);

return(0x01+(bsort(--count,base)));
}
