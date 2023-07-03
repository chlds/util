# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_mn_b_rrrrr(signed char(*di),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(~0x00);
if(!si) return(~0x00);
b = (si);
r = ctdn_a(di,b);
if(r<(0x01)) return(~0x00);
b = (r+(b));
r = cv_mn_b_rrrrrr(di,b);
if(~r) return(r);
embed(0x00,b);
return(cv_mn_b_rrrrr(di,si));
}
