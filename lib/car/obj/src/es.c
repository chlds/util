/* **** Notes

Escape sequences
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl es(signed(arg))) {
auto signed(__cdecl*f)(void);
auto signed(__cdecl*(fn[]))(void) = {
es_at,es_a,es_b,es_c,
es_d,es_e,es_f,es_g,
es_h,es_i,es_j,es_k,
es_l,es_m,es_n,es_o,
es_p,es_q,es_r,es_s,
es_t,es_u,es_v,es_w,
es_x,es_y,es_z,es_lsb,
es_rs,es_rsb,es_ca,es_ll,
0x00,
};
if(!(arg<(CTRL_KEYS))) return(0x00);
if(arg<(0x00)) return(0x00);
f = (*(arg+(fn)));
return(f());
}
