# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_mn_b_rrrrrr(signed char(*di),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(~0x00);
if(!si) return(~0x00);
b = (si);
r = ct(b);
if(!r) return(~0x00);
b++;
if(!(cv_da(0x0A,&r,b))) return(~0x00);
if(r<(0x00)) r = (0x01+(~r));
if(59<(r)) return(~0x00);
return(r);
}
