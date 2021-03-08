/* **** Notes

Count backward.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_a_back_r(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = nbytechar(*argp);
if(!r) return(0x00);

if(0x80^(r)) return(0x01);

return(0x01+(ct_a_back_r(--argp)));
}
