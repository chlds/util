# define CAR_H
# include "./../../../config.h"

signed(__cdecl convt_r(signed char(**di),signed char(**sym),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = cuet(sym,si);
if(!r) return(0x00);
b = cathy(si);
embed(0x00,r+(b));
b = cathy_xe(b);
*di = (b);
if(!b) return(0x00);
b = (0x00);
di++;
*di = (b);
si = (r+(si));
return(0x01+(convt_r(di,sym,si)));
}
