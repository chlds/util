/* **** Notes

Count letters down to the specific symbol
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ctdn_r(signed(arg),signed char(sym),signed char(*argp))) {
if(!arg) return(0x00);
if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(sym^(*(--arg+(argp))))) return(arg);
return(ctdn_r(arg,sym,argp));
}
