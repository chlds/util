# define CAR_H
# include "./../../../config.h"

signed(__cdecl cnta_r(signed char(**sym),signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cuea(sym,argp);
if(!r) return(0x00);
argp = (r+(argp));
return(0x01+(cnta_r(sym,argp)));
}
