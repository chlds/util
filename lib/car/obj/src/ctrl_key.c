/* **** Notes

Run in an array of function pointers

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_key(signed(arg),void(*argp))) {
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed(__cdecl*f)(void(*argp));
auto signed(__cdecl*(fn[]))(void(*argp)) = {
ctrl_key_at,
ctrl_key_a,
ctrl_key_b,
ctrl_key_c,
ctrl_key_d,
ctrl_key_e,
ctrl_key_f,
ctrl_key_g,
ctrl_key_h,
ctrl_key_i,
ctrl_key_j,
ctrl_key_k,
ctrl_key_l,
ctrl_key_m,
ctrl_key_n,
ctrl_key_o,
ctrl_key_p,
ctrl_key_q,
ctrl_key_r,
ctrl_key_s,
ctrl_key_t,
ctrl_key_u,
ctrl_key_v,
ctrl_key_w,
ctrl_key_x,
ctrl_key_y,
ctrl_key_z,
ctrl_key_lsb,
ctrl_key_rs,
ctrl_key_rsb,
ctrl_key_ca,
ctrl_key_ll,
0x00,
};
if(!(arg<(CTRL_KEYS))) return(0x00);
if(arg<(0x00)) return(0x00);
// if(!argp) return(0x00);
f = (*(arg+(fn)));
// e.g., f(*(arg+(argp)));
if(!f) return(0x00);
return(f(argp));
}
