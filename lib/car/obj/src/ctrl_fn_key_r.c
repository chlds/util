/* **** Notes

Run in an array of function pointers

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_fn_key_r(signed(arg),void(*argp))) {
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed(__cdecl*f)(void(*argp));
//* Currently under construction
auto signed(__cdecl*(fn[0x01+(CTRL_KEYS)]))(void(*argp)) = {
ctrl_at_b,
ctrl_a_b,
ctrl_b_b,
ctrl_c_b,
ctrl_d_b,
ctrl_e_b,
ctrl_f_b,
ctrl_g_b,
ctrl_h_b,
ctrl_i_b,
ctrl_j_b,
ctrl_k_b,
ctrl_l_b,
ctrl_m_b,
ctrl_n_b,
ctrl_o_b,
ctrl_p_b,
ctrl_q_b,
ctrl_r_b,
ctrl_s_b,
ctrl_t_b,
ctrl_u_b,
ctrl_v_b,
ctrl_w_b,
ctrl_x_b,
ctrl_y_b,
ctrl_z_b,
ctrl_lsb_b,
ctrl_rs_b,
ctrl_rsb_b,
ctrl_ca_b,
ctrl_ll_b,
(signed(__cdecl*)(void*)) (0x00),
};
if(!(arg^(DEL))) arg = (CTRL_D);
if(!(arg<(CTRL_KEYS))) return(0x00);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
f = (*(arg+(fn)));
// e.g., f(*(arg+(argp)));
return(f(argp));
}
