/* **** Notes

Output Unicode characters in UTF-8 after decoding Unicode bytes input out of the key board.

Along with C and Windows libraries

Remarks:
Based on UTF-8
*/


# define CLI_W32
# define R(D,S) ((S).D)
// A local macro function

# define CLI_FN (0x01+(0x20))

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_io_beta(signed char *cur,signed size,CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
enum {
CTRL_AT,CTRL_A,CTRL_B,CTRL_C,
CTRL_D,CTRL_E,CTRL_F,CTRL_G,
CTRL_H,CTRL_I,CTRL_J,CTRL_K,
CTRL_L,CTRL_M,CTRL_N,CTRL_O,
CTRL_P,CTRL_Q,CTRL_R,CTRL_S,
CTRL_T,CTRL_U,CTRL_V,CTRL_W,
CTRL_X,CTRL_Y,CTRL_Z,CTRL_LSB,
CTRL_RS,CTRL_RSB,CTRL_CA,CTRL_LL,
};

auto signed(__cdecl*(cli_fn[CLI_FN])) (void(*cli_fn_argp)) = {
(signed(__cdecl*) (void(*))) (cli_ctrl_at_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_a_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_b_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_c_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_d_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_e_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_f_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_g_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_h_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_i_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_j_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_k_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_l_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_m_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_n_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_o_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_p_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_q_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_r_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_s_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_t_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_u_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_v_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_w_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_x_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_y_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_z_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_lsb_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_rs_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_rsb_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_ca_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_ll_beta),
(signed(__cdecl*) (void(*))) (0x00),
};

auto unsigned const UTF_8 = (65001);
auto signed const LIMIT = (0x01+(0x04));

auto signed char const(SP) = (' ');
auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');

auto signed char *p;
auto signed diff;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

if(size<(LIMIT)) {
*cur = (0x00);
return(0x00);
}

// to append
r = cpy(*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))),cur);
if(!r) R(append,R(ty,*argp)) = (0x00);
else R(append,R(ty,*argp)) = (0x01);

// get
r = cli_in(&i,cur,size);
if(!r) {
printf("%s\n","<< Error at fn. cli_in()");
return(0x00);
}

diff = (r);
cur = (cur+(diff));
size = (-diff+(size));

if(i<(0x20)) {
// to invoke
*(--cur) = (signed char) (0x00);
size++;
*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (cur);
R(gauge,R(ty,*argp)) = (size);
// invoke ..and run in an array of function pointers e.g.,
// r = *(cli_fn+(i)) (*(cli_fn_argp+(i)));
r = (*(cli_fn+(i)))(argp);
if(!r) {
printf("%s%d%s%d%s\n","<< Error at fn. *(cli_fn[",i,"]) (*(cli_fn_argp+(",i,")))");
return(0x00);
}
size = (R(gauge,R(ty,*argp)));
cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if((*argp).ty.linebreak) {
// monitor
if(CLI_DBG_B<(CLI_DBG)) {
R(cur,R(debug,R(ty,*argp))) = (cur);
R(gauge,R(debug,R(ty,*argp))) = (size);
r = cli_debug_monitor_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_debug_monitor_beta()");
return(0x00);
}}
return(0x01);
}}

else {
// append
r = cpy(cur,*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
if(R(append,R(ty,*argp))) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}}

// add a fn. to parse the coordinates.

// put
r = cli_out(-diff+(cur));
if(!r) {
printf("%s\n","<< Error at fn. cli_out()");
return(0x00);
}
// also put
r = cli_outs(cur);
if(!r) {
if(R(append,R(ty,*argp))) {
printf("%s\n","<< Error at fn. cli_outs()");
return(0x00);
}}}

// monitor
if(CLI_DBG_B<(CLI_DBG)) {
R(cur,R(debug,R(ty,*argp))) = (cur);
R(gauge,R(debug,R(ty,*argp))) = (size);
r = cli_debug_monitor_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_debug_monitor_beta()");
return(0x00);
}}

return(0x01+(cli_io_beta(cur,size,argp)));
}
