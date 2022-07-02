/* **** Notes

Sort e.g., using with fn. bsort()

Remarks:
arg: Put the numbre of elements of an array for values at.
argp: Put the leading address of an array for values at.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl nsort(signed(arg),signed(*argp))) {
auto signed r;
if(!arg) return(0x00);
if(!argp) return(0x00);
r = (*(0x01+(argp)));
if(r<(*argp)) {
if(!(sw(&r,argp))) return(0x00);
*(0x01+(argp)) = (r);
}
argp++;
return(0x01+(nsort(--arg,argp)));
}
