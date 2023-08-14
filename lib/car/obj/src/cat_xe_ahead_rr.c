# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_xe_ahead_rr(signed char(**di),signed char(**si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
b = (*si);
if(!b) return(0x00);
r = cat_ahead_rl_b(di,b);
embed(0x00,b);
rl(b);
b = (0x00);
*si = (b);
si++;
if(!(~r)) return(0x00);
return(0x01+(cat_xe_ahead_rr(di,si)));
}
