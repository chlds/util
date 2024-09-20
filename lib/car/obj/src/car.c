/* Synopsis

Count column digits for a double word.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl car(signed short(radix),signed(arg))) {
auto signed short hexa = (0x10);
auto signed short deci = (0x0A);
auto signed short bina = (0x02);
if(radix<(bina)) radix = (deci);
if(hexa<(radix)) radix = (deci);
if(arg<(0x00)) arg = (0x01+(~arg));
if(!arg) return(0x01);
return(car_r(radix,arg));
}
