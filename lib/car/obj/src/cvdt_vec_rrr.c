# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_rrr(signed(arg),signed char(**argp))) {
auto signed char *b;
if(!argp) return(0x00);
b = (*argp);
if(!b) return(0x00);
arg = cvdi(b);
return(cvdt_vec_rrr_r(arg,argp));
}
