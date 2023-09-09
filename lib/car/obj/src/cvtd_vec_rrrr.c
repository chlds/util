# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_rrrr(signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(arg);
r = cvmn_txt(b);
if(!(0x01+(r))) return(arg);
OR(arg,r);
argp++;
return(cvtd_vec_rrrr_r(arg,argp));
}
