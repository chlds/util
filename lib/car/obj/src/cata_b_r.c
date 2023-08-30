# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cata_b_r(signed char(*di),signed char(*si),signed(arg))) {
auto signed char *b;
auto signed r;
if(!di) return(di);
if(!si) return(di);
if(!(0x00<(--arg))) return(di);
r = ct(si);
b = (r+(di));
b = cata(b,si);
if(!b) return(di);
r = ct(b);
if(r<(ct(si))) {
embed(0x00,b);
rl(b);
b = (0x00);
return(di);
}
embed(0x00,di);
rl(di);
di = (b);
return(cata_b_r(di,si,arg));
}
