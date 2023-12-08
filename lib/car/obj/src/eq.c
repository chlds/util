# define CAR_H
# include "./../../../config.h"

signed(__cdecl eq(signed char(*di),signed char(**si))) {
auto signed char **w;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
w = (si);
r = eq_r(di,w);
w = (0x00);
return(r);
}
