# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv_in_arabic_fig_r(signed short(radix),signed(arg))) {
auto signed char *b;
auto signed short flag;
auto signed char minus = ('-');
AND(flag,0x00);
if(arg<(0x00)) {
arg = (0x01+(~arg));
OR(flag,0x01);
}
b = cv_in_arabic_fig_rr(radix,arg);
if(!b) return(b);
if(flag) cat_ahead_b(&b,minus,(void*)0x00);
return(b);
}
