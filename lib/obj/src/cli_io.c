/* **** Notes

Output Unicode characters in UTF-8 after decoding Unicode bytes input out of the key board.

Along with C library

Remarks:
Based on UTF-8

Notes:
An array of function pointers is not yet implemented..
*/


# define CLI_MACRO

# define CLI_FN (0x01+(0x20))

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_io(signed char(*cur),signed(size),CLI_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(__cdecl*(cli_fn[CLI_FN])) (void(*cli_fn_argp)) = {
(signed(__cdecl*) (void(*))) (cli_ctrl_at),
(signed(__cdecl*) (void(*))) (cli_ctrl_a),
(signed(__cdecl*) (void(*))) (cli_ctrl_b),
(signed(__cdecl*) (void(*))) (cli_ctrl_c),
(signed(__cdecl*) (void(*))) (cli_ctrl_d),
(signed(__cdecl*) (void(*))) (cli_ctrl_e),
(signed(__cdecl*) (void(*))) (cli_ctrl_f),
(signed(__cdecl*) (void(*))) (cli_ctrl_g),
(signed(__cdecl*) (void(*))) (cli_ctrl_h),
(signed(__cdecl*) (void(*))) (cli_ctrl_i),
(signed(__cdecl*) (void(*))) (cli_ctrl_j),
(signed(__cdecl*) (void(*))) (cli_ctrl_k),
(signed(__cdecl*) (void(*))) (cli_ctrl_l),
(signed(__cdecl*) (void(*))) (cli_ctrl_m),
(signed(__cdecl*) (void(*))) (cli_ctrl_n),
(signed(__cdecl*) (void(*))) (cli_ctrl_o),
(signed(__cdecl*) (void(*))) (cli_ctrl_p),
(signed(__cdecl*) (void(*))) (cli_ctrl_q),
(signed(__cdecl*) (void(*))) (cli_ctrl_r),
(signed(__cdecl*) (void(*))) (cli_ctrl_s),
(signed(__cdecl*) (void(*))) (cli_ctrl_t),
(signed(__cdecl*) (void(*))) (cli_ctrl_u),
(signed(__cdecl*) (void(*))) (cli_ctrl_v),
(signed(__cdecl*) (void(*))) (cli_ctrl_w),
(signed(__cdecl*) (void(*))) (cli_ctrl_x),
(signed(__cdecl*) (void(*))) (cli_ctrl_y),
(signed(__cdecl*) (void(*))) (cli_ctrl_z),
(signed(__cdecl*) (void(*))) (cli_ctrl_lsb),
(signed(__cdecl*) (void(*))) (cli_ctrl_rs),
(signed(__cdecl*) (void(*))) (cli_ctrl_rsb),
(signed(__cdecl*) (void(*))) (cli_ctrl_ca),
(signed(__cdecl*) (void(*))) (cli_ctrl_ll),
(signed(__cdecl*) (void(*))) (0x00),
};

auto unsigned const UTF_8 = (65001);
auto signed const LIMIT = (0x01+(0x04));

auto signed char *p;
auto signed i,r;
auto signed short meta;
auto signed short flag;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

if(size<(LIMIT)) {
*cur = (0x00);
return(0x00);
}

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


cur = (r+(cur));
size = (-r+(size));

if(i<(0x20)) {
*(--cur) = (signed char) (0x00);
size++;
*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (cur);
R(gauge,R(ty,*argp)) = (size);
// and run in an array of function pointers e.g.,
// r = *(cli_fn+(i)) (*(cli_fn_argp+(i)));
r = (*(cli_fn+(i)))(argp);
if(!r) {
printf("%s%d%s%d%s\n","<< Error at fn. *(cli_fn[",i,"]) (*(cli_fn_argp+(",i,")))");
return(0x00);
}
size = (R(gauge,R(ty,*argp)));
cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(R(linebreak,R(ty,*argp))) return(0x01);
}

else {
// put
r = cli_out(-r+(cur));
if(!r) {
printf("%s\n","<< Error at fn. cli_out()");
return(0x00);
}}

return(0x01+(cli_io(cur,size,argp)));
}
