/*

Compare
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpa_b(signed char(*di),signed char(*si))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!di) return(0x00);
if(!si) return(0x00);
b = (di);
r = ct(b);
if(!(r<(ct(si)))) b = (si);
r = cmpa_b_r(di,si);
if(EQ(r,ct(b))) return(0x00);
di = (r+(di));
si = (r+(si));
r = (signed)(mask&(*di));
r = (r+(0x01+(~(signed)(mask&(*si)))));
return(r);
}
