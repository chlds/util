# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuemb(signed char(**sym),signed char(*argp))) {
auto signed r;
auto signed mb = (0x03);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = ct_a(argp);
if(!r) return(0x00);
if(r<(mb)) return(0x00);
argp = (r+(argp));
return(r+(cuemb_r(sym,argp)));
}
