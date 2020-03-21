/* **** Notes

Output Unicode characters in UTF-8 after decoding Unicode bytes input out of the key board.

Along with C and Windows libraries

Remarks:
Based on UTF-8
*/


# define CLI_MACRO
# define CLI_W32

# define CLI_FN (0x01+(0x20))

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_io_beta(signed char(*cur),signed(size),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
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

auto signed char const(SP) = (' ');
auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');

auto signed char *base,*p;
auto signed diff;
auto signed offset;
auto signed kept;
auto signed i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

// limit
if(size<(CLI_EMPTY)) {
offset = (R(offset,R(ty,*argp)));
size = (CLI_EMPTY+(*(CLI_BASE+(R(size,R(roll,R(ty,*argp)))))));
r = cli_extend(CLI_BASE,0x01/* cue */,size/* extra */,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_extend()");
return(0x00);
}
cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
cur = (cur+(offset));
// *(CLI_INDEX+(R(cur,R(ty,*argp)))) = (cur);
R(offset,R(ty,*argp)) = (offset);
}

// break
if(R(linebreak,R(ty,*argp))) return(0x01);

// quit
if(!(CLI_QUIT^(R(flag,R(ty,*argp))))) return(0x01);

// to append
r = ct(cur);
if(!r) p = (0x00);
else {
kept = keep(&p,cur);
if(!kept) {
printf("%s\n","<< Error at fn. keep()");
return(0x00);
}}

*(CLI_BASE+(R(append,R(ty,*argp)))) = (p);

i = (*(CLI_OUT+(R(old,R(ty,*argp)))));
*(CLI_IN+(R(old,R(ty,*argp)))) = (i);

// monitor
if(CLI_DBG_B<(CLI_DBG)) {
//* deprecated
R(cur,R(debug,R(ty,*argp))) = (cur);
R(gauge,R(debug,R(ty,*argp))) = (size);
//*/
*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (cur);
R(gauge,R(ty,*argp)) = (size);
r = cli_debug_monitor_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_debug_monitor_beta()");
return(0x00);
}}

// get
r = cli_in(&i,cur,size);
if(!r) {
printf("%s\n","<< Error at fn. cli_in()");
return(0x00);
}

diff = (r);
cur = (diff+(cur));
size = (-diff+(size));

*(CLI_OUT+(R(old,R(ty,*argp)))) = (i);

// count to copy and paste
if(!(CTRL_L^(i))) INC(R(clip,R(clipboard,R(ty,*argp))));
else R(clip,R(clipboard,R(ty,*argp))) = (0x00);

// to search
if(CTRL_W^(i)) {
flag = (~(CL_SEARCH));
AND(R(flag,R(ty,*argp)),flag);
}

if(i<(0x20)) {
// fix
*(--cur) = (signed char) (0x00);
size++;
if(p) {
// concatenate
r = concats(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(cur,R(ty,*argp)))),p,(void*) 0x00);
if(!r) {
printf("%s\n","<< Error at fn. concats()");
return(0x00);
}}
// to invoke
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
}

else {
// to refresh
y = (R(y,*(CLI_LEAD+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))));
// append
r = cpy(cur,p);
if(!r) {
if(p) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}}

// add a fn. to parse the coordinates.

// put
r = cli_coord_out_beta(-diff+(cur),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}
// also put
r = cli_gram_beta(0x11/* clear (0x01) and comeback (0x10) */,cur,argp);
if(!r) {
if(p) {
printf("%s\n","<< Error at fn. cli_gram_beta()");
return(0x00);
}}
if(y^(R(y,*(CLI_LEAD+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))))) OR(R(flag,R(ty,*argp)),CLI_REFRESH);
}

// to undo and redo
if(!(CTRL_LSB^(i))) R(undo,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))) = (0x01);
else R(undo,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))) = (0x00);

if(!(R(linebreak,R(ty,*argp)))) {
// release an appendant
if(p) {
r = release(kept,&p);
if(kept^(r)) {
printf("%s\n","<< Error at fn. release()");
return(0x00);
}
*(CLI_BASE+(R(append,R(ty,*argp)))) = (p);
}}

base = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
r = compare(cur,base);
R(offset,R(ty,*argp)) = (r);

// qrefresh
if(CLI_QREFRESH&(R(flag,R(ty,*argp)))) {
r = cli_gram_beta(0x11/* clear (0x01) and comeback (0x10) */,cur,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_gram_beta()");
return(0x00);
//*/
}
flag = (~(CLI_QREFRESH));
AND(R(flag,R(ty,*argp)),flag);
}

// refresh
if(CLI_REFRESH&(R(flag,R(ty,*argp)))) {
r = cli_coord_clear_output_pages_beta(0x01/* comeback */,cur,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_clear_output_pages_beta()");
return(0x00);
}
flag = (~(CLI_REFRESH));
AND(R(flag,R(ty,*argp)),flag);
}

base = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
*(CLI_LEAD+(R(cur,R(ty,*argp)))) = (base+(ct(base)));

return(0x01+(cli_io_beta(cur,size,argp)));
}
