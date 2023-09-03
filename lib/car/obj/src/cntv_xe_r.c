# define CAR_H
# include "./../../../config.h"

signed(__cdecl cntv_xe_r(signed char(**sym),signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cuex(sym,argp,cuev);
if(!r) return(0x00);
argp = (r+(argp));
return(0x01+(cntv_xe_r(sym,argp)));
}
