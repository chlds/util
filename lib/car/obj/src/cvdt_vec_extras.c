# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_extras(signed(arg),signed char(**argp),signed(__cdecl*f)(signed(arg),signed char(**argp)))) {
if(!argp) return(arg);
if(!(*argp)) return(arg);
argp++;
return(cvdt_vec_extras_r(arg,argp,f));
}
