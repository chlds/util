# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_extra(signed(arg),signed char(**argp),signed(__cdecl*f)(signed(arg),signed char(**argp)))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(cvdt_vec_extra_r(arg,argp,f));
}
