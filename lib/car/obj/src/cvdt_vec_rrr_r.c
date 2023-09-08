# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_rrr_r(signed(arg),signed char(**argp))) {
auto signed char *b;
if(!argp) return(0x00);
b = (*argp);
if(!b) return(0x00);
if(!arg) arg = cvmo(b);
if(!arg) return(0x00);
argp++;
return(cvdt_vec_extra(arg,argp,cvdt_vec_rrr_rr));
}
