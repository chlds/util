# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv_b_r(signed char(**argp),signed(radix),signed(arg))) {
auto signed char *b;
auto signed char *p;
auto signed char minus[] = ("-");
b = (0x00);
p = (b);
if(arg<(0x00)) {
arg = (0x01+(~arg));
p = (minus);
}
if(!(cv_b_rr(&b,argp,radix,arg))) {
rl(b);
b = (0x00);
}
if(!b) return(b);
if(p) cat_ahead_b(&b,p,(void*)0x00);
return(b);
}
