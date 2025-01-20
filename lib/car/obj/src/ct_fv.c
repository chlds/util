# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_fv(signed char *(__cdecl**f)(void))) {
if(!f) return(0x00);
if(!(*f)) return(0x00);
f++;
return(0x01+(ct_fv(f)));
}
