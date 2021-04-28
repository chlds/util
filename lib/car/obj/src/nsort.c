/* **** Notes

Sort e.g., using with fn. bsort()

arg: Put the numbre of elements of an array for values at.
argp: Put the leading address of an array for values at.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl nsort(signed(arg),signed(*argp))) {

auto signed r;

if(!arg) return(0x00);
if(!argp) return(0x00);

r = (*argp);
argp++;
if(!(r<(*argp))) {
if(!(sw(&r,argp))) return(0x00);
*(argp+(~0x00)) = (r);
}

return(0x01+(nsort(--arg,argp)));
}
