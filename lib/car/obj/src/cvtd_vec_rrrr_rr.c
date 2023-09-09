# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_rrrr_rr(signed(arg),signed char(**argp))) {
auto signed r;
if(!argp) return(~0x00);
if(!(*argp)) return(arg);
r = convhm_mer(arg,argp);
if(0x01+(r)) return(r);
return(arg);
}
