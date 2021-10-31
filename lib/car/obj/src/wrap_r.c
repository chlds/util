/* **** Notes

Count.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl wrap_r(signed short(arg),signed(*cache),signed char(**argp))) {

auto signed r;

if(arg<(0x01)) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ct(*argp);
if(!r) return(r);

*cache = (r+(*cache));
if(arg<(*cache)) return(0x00);

argp++;

return(0x01+(wrap_r(arg,cache,argp)));
}
