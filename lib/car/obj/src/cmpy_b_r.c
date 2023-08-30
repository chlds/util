# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpy_b_r(signed char(*di),signed char(*si))) {
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(!(cmpa_b(di,si))) return(0x00);
si++;
return(0x01+(cmpy_b_r(di,si)));
}
