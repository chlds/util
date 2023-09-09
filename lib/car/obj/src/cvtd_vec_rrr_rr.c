# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_rrr_rr(signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(arg);
if(cf_no(b)) return(~0x00);
r = convmer(arg,argp);
if(0x01+(r)) return(r);
return(r);
}
