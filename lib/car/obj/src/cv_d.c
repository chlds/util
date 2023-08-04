/* Notes

Convert a signed double word into letters

Remarks:
Call fn. rl later
//*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_d(signed short(radix),signed char(**di),signed(si))) {
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *table = ("0123456789ABCDEF");
auto signed char minus = ('-');
auto signed short hexa = (0x10);
auto signed short deci = (0x0A);
auto signed short bina = (0x02);
if(!di) return(0x00);
if(radix<(bina)) radix = (deci);
if(hexa<(radix)) radix = (deci);
r = car(radix,si);
if(!r) return(0x00);
AND(flag,0x00);
if(si<(0x00)) {
si = (0x01+(~si));
OR(flag,0x01);
}
if(flag) r++;
r++;
r = (r*(sizeof(**di)));
b = (signed char(*)) alloc(r);
*di = (b);
if(!b) return(0x00);
b = (r+(b));
--b;
*b = (0x00);
r = cv_d_r(radix,table,b,si);
if(!r) return(0x00);
if(flag) **di = (minus);
return(r);
}
