/* **** Notes

Count.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl wp_argt_r(signed short(arg),signed(*cache),signed char(**argp))) {

auto signed r;

if(arg<(0x01)) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ct(*argp);
if(!r) return(r);

*cache = (r+(*cache));
argp++;
if(arg<(*cache)) {
if(EQ(arg,*cache)) return(0x01);
return(0x00);
}

INC(*cache);

return(0x01+(wp_argt_r(arg,cache,argp)));
}
