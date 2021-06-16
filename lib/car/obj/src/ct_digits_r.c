/* **** Notes

Count digits.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_digits_r(signed char(*fig),signed char(*argp))) {

auto signed r;

if(!fig) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ord(fig,*argp);
if(!(r<(ct(fig)))) return(0x00);

argp++;

return(0x01+(ct_digits_r(fig,argp)));
}
