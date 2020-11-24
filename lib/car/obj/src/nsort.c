/* **** Notes

Sort e.g., using with fn. bsort()

count: Put the numbre of elements of an array for values at.
base: Put the leading address of an array for values at.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl nsort(signed(count),signed(*base))) {

/* **** DATA, BSS, STACK */
auto signed cache;

/* **** **** CODE/TEXT */
if(!count) return(0x00);
if(!base) return(0x00);

cache = (*base);
base++;
if(!(cache<(*base))) {
*(base+(~(0x00))) = (*base);
*base = (cache);
}

return(0x01+(nsort(--count,base)));
}
