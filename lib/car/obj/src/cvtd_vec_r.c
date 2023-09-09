# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_r(signed char **argp)) {
auto signed r;
if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);
r = cvtd_vec_rr(argp);
if(0x01+(r)) return(r);
argp++;
return(cvtd_vec_r(argp));
}
