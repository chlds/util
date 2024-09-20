# define CAR_H
# include "./../../../config.h"

signed(__cdecl car_r(signed short(radix),signed(arg))) {
if(!arg) return(arg);
arg = (arg/(radix));
return(0x01+(car_r(radix,arg)));
}
