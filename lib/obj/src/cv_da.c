/* **** Notes

Convert to a signed/unsigned double word out of characters.
//*/


# include <stdio.h>

signed(__cdecl cv_da(signed short(radix),signed(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char *table = ("0123456789ABCDEF");
auto signed char MINUS = ('-');

auto signed short HEXA = (0x10);
auto signed short DECI = (0x0A);
auto signed short BINA = (0x02);

auto signed i,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);
if(radix<(BINA)) radix = (DECI);
if(HEXA<(radix)) radix = (DECI);

if(!(MINUS^(*si))) flag = (0x01);
else flag = (0x00);

*di = (0x00);

r = cv_da_internal(radix,table,di,si);
if(!r) {
printf("%s\n","<< Error at fn. cv_da_internal()");
return(0x00);
}

if(flag) *di = (0x01+(~(*di)));

return(0x01);
}
