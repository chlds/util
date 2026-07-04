# define CAR_H
# include "./../../../config.h"

signed(__cdecl conva_r(signed char(**di),signed char(**sym),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
r = cuea(sym,si);
if(!r) return(r);
/*
b = cathy(si);
embed(0x00,r+(b));
b = cathy_xe(b);
//*/
b = convey(si,r);
*di = (b);
if(!b) return(0x00);
b = (0x00);
di++;
*di = (b);
return(0x01+(conva_r(di,sym,si+(r))));
}
