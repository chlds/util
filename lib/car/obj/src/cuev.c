# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuev(signed char(**sym),signed char(*argp))) {
if(!deref(argp)) return(0x00);
return(cuev_r(sym,argp));
}
