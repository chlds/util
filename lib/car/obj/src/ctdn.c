/* **** Notes

Count letters down to the specific symbol.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ctdn(signed char(sym),signed char(*argp))) {

auto signed r;

if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ct(argp);

return(ctdn_r(r,sym,argp));
}
