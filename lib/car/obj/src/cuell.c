# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuell(signed char(**sym),signed char(*argp))) {
auto signed r;
auto signed mb = (0x03);
r = ct_a(argp);
if(!r) return(r);
if(!(r<(mb))) return(0x00);
return(r+(cuell_r(sym,argp+(r))));
}
