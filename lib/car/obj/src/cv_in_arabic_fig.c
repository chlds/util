/* **** Notes

Convert a signed double word into letters

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv_in_arabic_fig(signed short(radix),signed(arg))) {
auto signed short hexa = (0x10);
auto signed short deci = (0x0A);
auto signed short bina = (0x02);
if(radix<(bina)) radix = (deci);
if(hexa<(radix)) radix = (deci);
return(cv_in_arabic_fig_r(radix,arg));
}
