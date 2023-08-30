# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpa_b_r(signed char(*di),signed char(*si))) {
auto signed r;
auto signed mask = (0xFF);
if(!di) return(0x00);
if(!si) return(0x00);
r = (signed)(mask&(*di));
if(r^(signed)(mask&(*si))) return(0x00);
if(!r) return(r);
di++;
si++;
return(0x01+(cmpa_b_r(di,si)));
}
