/* **** Notes

Run in an array of function pointers.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_fn_r(signed(arg),void(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed(__cdecl*f)(void(*argp));
auto signed(__cdecl*(fn[0x01+(CTRL_KEYS)]))(void(*argp)) = {
(signed(__cdecl*)(void*)) (ctrl_at),
(signed(__cdecl*)(void*)) (ctrl_a),
(signed(__cdecl*)(void*)) (ctrl_b),
(signed(__cdecl*)(void*)) (ctrl_c),
(signed(__cdecl*)(void*)) (ctrl_d),
(signed(__cdecl*)(void*)) (ctrl_e),
(signed(__cdecl*)(void*)) (ctrl_f),
(signed(__cdecl*)(void*)) (ctrl_g),
(signed(__cdecl*)(void*)) (ctrl_h),
(signed(__cdecl*)(void*)) (ctrl_i),
(signed(__cdecl*)(void*)) (ctrl_j),
(signed(__cdecl*)(void*)) (ctrl_k),
(signed(__cdecl*)(void*)) (ctrl_l),
(signed(__cdecl*)(void*)) (ctrl_m),
(signed(__cdecl*)(void*)) (ctrl_n),
(signed(__cdecl*)(void*)) (ctrl_o),
(signed(__cdecl*)(void*)) (ctrl_p),
(signed(__cdecl*)(void*)) (ctrl_q),
(signed(__cdecl*)(void*)) (ctrl_r),
(signed(__cdecl*)(void*)) (ctrl_s),
(signed(__cdecl*)(void*)) (ctrl_t),
(signed(__cdecl*)(void*)) (ctrl_u),
(signed(__cdecl*)(void*)) (ctrl_v),
(signed(__cdecl*)(void*)) (ctrl_w),
(signed(__cdecl*)(void*)) (ctrl_x),
(signed(__cdecl*)(void*)) (ctrl_y),
(signed(__cdecl*)(void*)) (ctrl_z),
(signed(__cdecl*)(void*)) (ctrl_lsb),
(signed(__cdecl*)(void*)) (ctrl_rs),
(signed(__cdecl*)(void*)) (ctrl_rsb),
(signed(__cdecl*)(void*)) (ctrl_ca),
(signed(__cdecl*)(void*)) (ctrl_ll),
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
