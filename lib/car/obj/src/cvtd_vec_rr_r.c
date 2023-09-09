# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_rr_r(signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(~0x00);
r = cvhr_td(b);
if(0x01+(r)) return(convhr(r));
return(cvtd_vec_rrr(r,argp));
}
