# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_va_ahead_b_r(signed char(***di),signed char(**si))) {
auto signed char **v;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
v = (*di);
r = ct_v_b(v);
r++;
v = (signed char**)(alloc(++r*(sizeof(*v))));
if(!v) return(0x00);
*v = cathy(*si);
r = cpy_va_ahead_b(v,*di);
embed_v(0x00,*di);
rl(*di);
*di = (v);
return(0x01+(cat_va_ahead_b_r(di,++si)));
}
