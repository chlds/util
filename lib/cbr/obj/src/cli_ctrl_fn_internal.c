/* **** Notes

Run in an array of function pointers.

Remarks:
Based on UTF-8
*/


# define CBR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_fn_internal(signed(arg),void(*argp))) {

auto signed char *b;
auto signed char *p;
auto signed dif;
auto signed i,r;
auto signed short flag;
auto signed(__cdecl*f)(void(*f_argp));
auto signed(__cdecl*(fn[0x01+(CTRL_KEYS)]))(void(*f_argp)) = {
(signed(__cdecl*)(void(*))) (cli_ctrl_at),
(signed(__cdecl*)(void(*))) (cli_ctrl_a),
(signed(__cdecl*)(void(*))) (cli_ctrl_b),
(signed(__cdecl*)(void(*))) (cli_ctrl_c),
(signed(__cdecl*)(void(*))) (cli_ctrl_d),
(signed(__cdecl*)(void(*))) (cli_ctrl_e),
(signed(__cdecl*)(void(*))) (cli_ctrl_f),
(signed(__cdecl*)(void(*))) (cli_ctrl_g),
(signed(__cdecl*)(void(*))) (cli_ctrl_h),
(signed(__cdecl*)(void(*))) (cli_ctrl_i),
(signed(__cdecl*)(void(*))) (cli_ctrl_j),
(signed(__cdecl*)(void(*))) (cli_ctrl_k),
(signed(__cdecl*)(void(*))) (cli_ctrl_l),
(signed(__cdecl*)(void(*))) (cli_ctrl_m),
(signed(__cdecl*)(void(*))) (cli_ctrl_n),
(signed(__cdecl*)(void(*))) (cli_ctrl_o),
(signed(__cdecl*)(void(*))) (cli_ctrl_p),
(signed(__cdecl*)(void(*))) (cli_ctrl_q),
(signed(__cdecl*)(void(*))) (cli_ctrl_r),
(signed(__cdecl*)(void(*))) (cli_ctrl_s),
(signed(__cdecl*)(void(*))) (cli_ctrl_t),
(signed(__cdecl*)(void(*))) (cli_ctrl_u),
(signed(__cdecl*)(void(*))) (cli_ctrl_v),
(signed(__cdecl*)(void(*))) (cli_ctrl_w),
(signed(__cdecl*)(void(*))) (cli_ctrl_x),
(signed(__cdecl*)(void(*))) (cli_ctrl_y),
(signed(__cdecl*)(void(*))) (cli_ctrl_z),
(signed(__cdecl*)(void(*))) (cli_ctrl_lsb),
(signed(__cdecl*)(void(*))) (cli_ctrl_rs),
(signed(__cdecl*)(void(*))) (cli_ctrl_rsb),
(signed(__cdecl*)(void(*))) (cli_ctrl_ca),
(signed(__cdecl*)(void(*))) (cli_ctrl_ll),
(signed(__cdecl*)(void(*))) (0x00),
};

if(!(arg<(CTRL_KEYS))) return(0x00);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

// e.g., f(*(arg+(f_argp)));
f = (*(arg+(fn)));
r = f(argp);
if(!r) {
printf("%s%d%s%d%s \n","<< Error at fn. (__cdecl*(",arg,"+(fn)))(*(",arg,"+(f_argp)))");
return(0x00);
}

return(r);
}
