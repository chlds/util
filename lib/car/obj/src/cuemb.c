# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuemb(signed char(**sym),signed char(*argp))) {
auto signed r;
auto signed mb = (0x03);
r = ct_a(argp);
if(r<(mb)) return(0x00);
return(r+(cuemb_r(sym,argp+(r))));
}
