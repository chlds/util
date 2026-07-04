# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuea(signed char(**sym),signed char(*argp))) {
if(!deref(argp)) return(0x00);
return(cuea_r(sym,argp));
}
