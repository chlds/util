/* **** Notes

Count letters to the terminating null character.
*/


# include "./incl/config.h"

signed(__cdecl ct_l(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(r,0x00);
while(*(r+(argp))) r++;

return(r);
}
