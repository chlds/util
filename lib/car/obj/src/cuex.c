# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuex(signed char(**sym),signed char(*argp),signed(__cdecl*f)(signed char(**sym),signed char(*argp)))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(cuex_r(sym,argp,f));
}
