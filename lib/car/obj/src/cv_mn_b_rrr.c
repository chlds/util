# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_mn_b_rrr(signed char(**di),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(~0x00);
if(!si) return(~0x00);
b = (0x00);
cat_b(&b,si,(void*)0x00);
r = cv_mn_b_rrrr(di,b);
embed(0x00,b);
rl(b);
b = (0x00);
return(r);
}
