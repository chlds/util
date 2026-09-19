# define CAR_H
# include "./../../../config.h"

signed *(__cdecl chainage(signed char(*arg))) {
auto signed r;
r = measure(arg);
if(!r) return(0x00);
return(crescere(r,chainage(arg+(r))));
}
