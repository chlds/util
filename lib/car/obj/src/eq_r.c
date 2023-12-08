# define CAR_H
# include "./../../../config.h"

signed(__cdecl eq_r(signed char(*di),signed char(**si))) {
auto signed char *b;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
b = (*si);
if(!(cmpa_b(di,b))) return(0x00);
si++;
return(0x01+(eq_r(di,si)));
}
