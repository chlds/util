# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_rrr(signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(~0x00);
r = cvhr_txt(b);
if(!(0x01+(r))) return(r);
arg = convhr(r);
argp++;
r = cvtd_vec_rrr_r(r,argp);
if(0x01+(r)) return(convhr(r));
return(cvtd_vec_extras(arg,argp,cvtd_vec_rrrr));
}
