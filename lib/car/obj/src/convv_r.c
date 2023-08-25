# define CAR_H
# include "./../../../config.h"

signed(__cdecl convv_r(signed char(**di),signed char(**sym),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = cuev(sym,si);
if(!r) return(0x00);
b = (0x00);
cat_b(&b,si,(void*)0x00);
embed(0x00,r+(b));
b = cat_xe(b,(void*)0x00);
*di = (b);
if(!b) return(0x00);
b = (0x00);
di++;
*di = (b);
si = (r+(si));
return(0x01+(convv_r(di,sym,si)));
}
