# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_b_rr(signed char(**di),signed char(**table),signed(radix),signed(si))) {
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
*di = catha(b,*di);
b = (0x00);
si = (si/(radix));
if(!si) return(0x01);
return(0x01+(cv_b_rr(di,table,radix,si)));
}
