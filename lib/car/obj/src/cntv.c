# define CAR_H
# include "./../../../config.h"

signed(__cdecl cntv(signed char(**sym),signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(cntv_r(sym,argp));
}
