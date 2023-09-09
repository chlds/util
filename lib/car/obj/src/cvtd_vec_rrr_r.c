# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_rrr_r(signed(arg),signed char(**argp))) {
auto signed r;
if(!argp) return(~0x00);
if(!(*argp)) return(arg);
r = convmer(arg,argp);
if(0x01+(r)) return(r);
argp++;
return(cvtd_vec_rrr_rr(arg,argp));
}
