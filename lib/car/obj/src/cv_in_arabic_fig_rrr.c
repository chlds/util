# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_in_arabic_fig_rrr(signed char(**di),signed char(**table),signed short(radix),signed(si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!table) return(0x00);
r = (si%(radix));
b = (*(r+(table)));
if(!b) {
b = (*di);
rl(b);
b = (0x00);
*di = (b);
return(0x00);
}
cat_ahead_b(di,b,(void*)0x00);
b = (0x00);
si = (si/(radix));
if(!si) return(0x01);
return(0x01+(cv_in_arabic_fig_rrr(di,table,radix,si)));
}
