/* **** Notes

Output Unicode characters in UTF-8 after decoding Unicode bytes input out of the key board.

Along with C and Windows libraries

Remarks:
Based on UTF-8
*/


# define CLI_MACRO
# define CLI_W32

# define CL_FN (0x01+(0x20))

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cl_io_beta(signed char(*cur),signed(size),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(__cdecl*(cl_fn[CL_FN])) (void(*cl_fn_argp)) = {
(signed(__cdecl*) (void(*))) (cl_ctrl_at_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_a_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_b_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_c_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_d_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_e_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_f_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_g_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_h_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_i_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_j_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_k_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_l_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_m_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_n_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_o_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_p_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_q_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_r_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_s_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_t_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_u_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_v_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_w_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_x_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_y_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_z_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_lsb_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_rs_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_rsb_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_ca_beta),
(signed(__cdecl*) (void(*))) (cl_ctrl_ll_beta),
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
auto signed short meta;
auto signed short flag;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

// limit
if(size<(LIMIT)) {
*cur = (0x00);
return(0x00);
}

// break
if(R(linebreak,R(commandline,R(ty,*argp)))) return(0x01);

// quit
if(!(CLI_QUIT^(R(flag,R(ty,*argp))))) return(0x01);

// to append
r = cpy(*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))),cur);
if(!r) R(append,R(commandline,R(ty,*argp))) = (0x00);
else R(append,R(commandline,R(ty,*argp))) = (0x01);

// monitor
if(CLI_DBG_D<(CLI_DBG)) {
R(cur,R(debug,R(commandline,R(ty,*argp)))) = (cur);
R(gauge,R(debug,R(commandline,R(ty,*argp)))) = (size);
r = cli_debug_monitor_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_debug_monitor_beta()");
return(0x00);
}}

// get
r = cli_in(&i,&meta,cur,size);
if(!r) {
printf("%s\n","<< Error at fn. cli_in()");
return(0x00);
}


// check for function and arrow keys
if(meta) {
r = cli_run_meta_beta(meta,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_run_meta_beta()");
return(0x00);
}
/* and to invoke fn. cli_ctrl_at_beta after calling the function.
i = (0x00);
r = (0x01);
//*/
}


diff = (r);
cur = (diff+(cur));
size = (-diff+(size));

if(i<(0x20)) {
// fix
*(--cur) = (signed char) (0x00);
size++;
// concatenate
r = concats(*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(cur,R(commandline,R(ty,*argp))))),*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))),(void*) 0x00);
/* empty or..
if(!r) {
printf("%s\n","<< Error at fn. concats()");
return(0x00);
}
//*/
// to invoke
*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))) = (cur);
R(gauge,R(commandline,R(ty,*argp))) = (size);
// invoke ..and run in an array of function pointers e.g.,
// r = *(cl_fn+(i)) (*(cl_fn_argp+(i)));
r = (*(cl_fn+(i)))(argp);
if(!r) {
printf("%s%d%s%d%s\n","<< Error at fn. *(cl_fn[",i,"]) (*(cl_fn_argp+(",i,")))");
return(0x00);
}
size = (R(gauge,R(commandline,R(ty,*argp))));
cur = (*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))));
}

else {
// append
r = cpy(cur,*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
if(R(append,R(commandline,R(ty,*argp)))) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}}

// add a fn. to parse the coordinates.

// put
r = cli_col_out_beta(-diff+(cur),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_col_out_beta()");
return(0x00);
}
// also put
r = cli_output_beta(0x01/* a comeback flag */,cur,argp);
if(!r) {
if(R(append,R(commandline,R(ty,*argp)))) {
printf("%s\n","<< Error at fn. cli_output_beta()");
return(0x00);
}}}

return(0x01+(cl_io_beta(cur,size,argp)));
}
