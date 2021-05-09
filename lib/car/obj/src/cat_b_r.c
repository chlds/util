/* **** Notes

Concatenate to the terminating null pointer.

Remarks:
Release buffer later.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cat_b_r(signed char(**cache),signed char(**argp))) {

auto signed r;

if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = concatenate(0x00,cache,*argp);
if(!r) return(0x00);

argp++;

return(0x01+(cat_b_r(cache,argp)));
}
