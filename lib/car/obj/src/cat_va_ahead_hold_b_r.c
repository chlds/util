/* **** Notes

Concatenate
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_va_ahead_hold_b_r(signed char(***di),signed char(**si))) {
auto signed char **v;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
v = (*di);
r = ct_v_b(v);
r++;
r++;
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
if(!v) return(0x00);
*v = (*si);
r = cpy_va_ahead_b(v,*di);
embed_v(0x00,*di);
rl(*di);
*di = (v);
si++;
return(0x01+(cat_va_ahead_hold_b_r(di,si)));
}
