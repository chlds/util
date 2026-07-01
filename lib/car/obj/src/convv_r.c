# define CAR_H
# include "./../../../config.h"

signed(__cdecl convv_r(signed char(**di),signed char(**sym),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!deref(si)) return(0x00);
r = cuev(sym,si);
if(!r) return(0x00);
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
si = (r+(si));
return(0x01+(convv_r(di,sym,si)));
}
