# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuell_r(signed char(**sym),signed char(*argp))) {
auto signed r;
auto signed mb = (0x03);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(cueht(argp)) return(0x00);
if(cuelf(argp)) return(0x00);
if(cuecr(argp)) return(0x00);
if(cuesp(argp)) return(0x00);
if(cuesy(sym,argp)) return(0x00);
r = ct_a(argp);
if(!r) return(0x00);
if(!(r<(mb))) return(0x00);
argp = (r+(argp));
return(r+(cuell_r(sym,argp)));
}
