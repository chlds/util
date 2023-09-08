# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_r(signed char **argp)) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cvdt_vec_rr(argp);
if(r) return(r);
argp++;
return(cvdt_vec_r(argp));
}
