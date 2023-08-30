# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpy_b_rr(signed char(*di),signed char(*si))) {
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*di)) return(0x00);
if(!(cmpa_b(di,si))) return(0x00);
di++;
return(0x01+(cmpy_b_rr(di,si)));
}
