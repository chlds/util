/* **** Notes

Count.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl wrap_va(signed short(cols),signed short(arg/* align */),signed char(**argp))) {

auto signed r;

if(cols<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

return(wrap_va_r(cols,arg,argp));
}
