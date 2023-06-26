# define CAR_H
# include "./../../../config.h"

signed(__cdecl catt_rr(signed char(**di),signed char(**si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
b = (*si);
if(!b) return(0x00);
r = cat_rl_b(di,b);
if(!(~r)) return(0x00);
si++;
b = (0x00);
return(0x01+(catt_rr(di,si)));
}
