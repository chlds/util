/* **** Notes

A bubble sort implemented with fn. nsort().

Remarks:
arg: Put the numbre of elements of an array for values at.
argp: Put the leading address of an array for values at.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl bsort(signed(arg),signed(*argp))) {
auto signed r;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
r = nsort(--arg,argp);
if(arg^(r)) return(0x00);
return(0x01+(bsort(arg,argp)));
}
