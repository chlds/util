/* **** Notes

Count column digits for a double word.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl car_r(signed short(radix),signed(arg))) {

if(!arg) return(0x00);
arg = (arg/(radix));

return(0x01+(car_r(radix,arg)));
}
