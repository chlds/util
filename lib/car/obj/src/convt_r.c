# define CAR_H
# include "./../../../config.h"

signed(__cdecl convt_r(signed char(**di),signed char(**sym),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
r = cuet(sym,si);
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
return(0x01+(convt_r(di,sym,si+(r))));
}
