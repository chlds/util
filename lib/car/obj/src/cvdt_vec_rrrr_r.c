# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_rrrr_r(signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(arg);
b = (*argp);
if(!b) return(arg);
r = cvyr(b);
OR(arg,r);
return(arg);
}
