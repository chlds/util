/* **** Notes

Count.

Remarks:
Refer at fn. wrap.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl wp_argt(signed short(arg),signed char(**argp))) {

auto signed r;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(r,0x00);

return(wp_argt_r(arg,&r,argp));
}
