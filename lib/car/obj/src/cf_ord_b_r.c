# define CAR_H
# include "./../../../config.h"

signed(__cdecl cf_ord_b_r(signed char(**di),signed char(*si))) {
auto signed char **w;
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(!(*di)) return(0x00);
w = (di);
b = (si);
r = ord_part_b(w,b);
if(!(r<(ct_v(w)))) return(0x00);
return(0x01);
}
