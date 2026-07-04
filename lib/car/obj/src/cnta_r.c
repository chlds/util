# define CAR_H
# include "./../../../config.h"

signed(__cdecl cnta_r(signed char(**sym),signed char(*argp))) {
auto signed r;
r = cuea(sym,argp);
if(!r) return(r);
return(0x01+(cnta_r(sym,argp+(r))));
}
