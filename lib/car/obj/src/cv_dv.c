/* **** Notes

Convert into a signed double word out of an array of pointers for characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_dv(signed short(radix),signed(*di),signed char(**si))) {

auto signed r;
auto signed short flag;
auto signed short hexa = (0x10);
auto signed short deci = (0x0A);
auto signed short bina = (0x02);

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(radix<(bina)) radix = (deci);
if(hexa<(radix)) radix = (deci);

AND(*di,0x00);

return(cv_dv_r(radix,di,si));
}
