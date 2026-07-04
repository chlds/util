# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuemb_r(signed char(**sym),signed char(*argp))) {
auto signed r;
auto signed mb = (0x03);
if(cueht(argp)) return(0x00);
if(cuelf(argp)) return(0x00);
if(cuecr(argp)) return(0x00);
if(cuesp(argp)) return(0x00);
if(cuesy(sym,argp)) return(0x00);
r = ct_a(argp);
if(r<(mb)) return(0x00);
return(r+(cuemb_r(sym,argp+(r))));
}
