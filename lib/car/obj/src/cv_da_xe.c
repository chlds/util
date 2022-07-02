/* **** Notes

Convert into a signed double word out of characters.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_da_xe(signed short(radix),signed(*di),signed char(*si))) {
auto signed r;
auto signed short flag;
auto signed char *table = ("0123456789ABCDEF");
auto signed short hexa = (0x10);
auto signed short deci = (0x0A);
auto signed short bina = (0x02);
auto signed char minus = ('-');
if(!di) return(0x00);
if(!si) return(0x00);
if(radix<(bina)) radix = (deci);
if(hexa<(radix)) radix = (deci);
AND(*di,0x00);
AND(flag,0x00);
if(!(minus^(*si))) OR(flag,0x01);
r = cv_da_xe_r(radix,table,di,si);
if(flag) *di = (0x01+(~(*di)));
return(r);
}
