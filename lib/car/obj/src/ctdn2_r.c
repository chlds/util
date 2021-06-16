/* **** Notes

Count letters down to the specific symbol.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ctdn2_r(signed(arg),signed char(sym),signed char(*argp))) {

if(!arg) return(0x00);
if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(sym^(*(--arg+(argp))))) return(arg);

return(ctdn2_r(arg,sym,argp));
}
