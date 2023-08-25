# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuet(signed char(**sym),signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(cuet_r(sym,argp));
}
