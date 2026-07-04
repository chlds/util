# define CAR_H
# include "./../../../config.h"

signed(__cdecl cntv_r(signed char(**sym),signed char(*argp))) {
auto signed r;
r = cuev(sym,argp);
if(!r) return(r);
return(0x01+(cntv_r(sym,argp+(r))));
}
