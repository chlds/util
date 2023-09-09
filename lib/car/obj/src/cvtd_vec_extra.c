# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_extra(signed char(**argp),signed(__cdecl*f)(signed char(**argp)))) {
if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);
argp++;
return(cvtd_vec_extra_r(argp,f));
}
