/* **** Notes

Convert a signed double word into letters.

Remarks:
Release.
//*/


# include <stdlib.h>

signed(__cdecl cv_d(signed short(radix),signed char(**di),signed(si))) {

/* **** DATA, BSS and STACK */
auto signed char *table = ("0123456789ABCDEF");
auto signed char MINUS = ('-');
auto signed short HEXA = (0x10);
auto signed short DECI = (0x0A);
auto signed short BINA = (0x02);

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(radix<(BINA)) radix = (DECI);
if(HEXA<(radix)) radix = (DECI);

r = car(radix,si);
if(!r) return(0x00);

flag = (0x00);
if(si<(0x00)) flag++;
if(flag) r++;
r++;
r = (r*(sizeof(**di)));
p = (signed char(*)) malloc(r);
if(!p) {
*di = (0x00);
return(0x00);
}

*di = (p);
p = (r+(p));
--p;
*p = (0x00);
r = cv_d_internal(radix,p,si);
if(!r) return(0x00);

if(flag) **di = (MINUS);

return(r);
}
