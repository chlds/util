/* **** Notes

Concatenate to the terminating null pointer.

Remarks:
Release buffer later.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cat_b_r(signed char(**di),signed char(**si))) {

auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = concatenate(0x00,di,*si);
if(!r) return(0x00);

si++;

return(0x01+(cat_b_r(di,si)));
}
