/* **** Notes

Count.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl wrap(signed short(arg),signed char(**argp))) {

auto signed r;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(r,0x00);

return(wrap_r(arg,&r,argp));
}
