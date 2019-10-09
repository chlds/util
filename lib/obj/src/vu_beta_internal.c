/* **** Notes

Read and write on the CUI

Remarks:
UN-COMPLETED
Refer at incl/cmdln.h to set a debug flag.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

# define COORDS (0x01+(0x03))
# define COUNT_FN (0x01+(0x20))
# define OBJS (0x01+(0x03))

signed(__cdecl vu_beta_internal(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(terminate);

static signed(__cdecl*(fn[COUNT_FN])) (void(*argp)) = {

(signed(__cdecl*) (void(*))) (cmdln_ctrl_at),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_a),
(signed(__cdecl*) (void(*))) (ctrl_b_beta),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_c),
(signed(__cdecl*) (void(*))) (ctrl_d_beta),
(signed(__cdecl*) (void(*))) (ctrl_e_beta),
(signed(__cdecl*) (void(*))) (ctrl_f_beta),
(signed(__cdecl*) (void(*))) (ctrl_g_beta),

(signed(__cdecl*) (void(*))) (ctrl_h_beta),
(signed(__cdecl*) (void(*))) (ctrl_i_beta),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_j),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_k),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_l),
(signed(__cdecl*) (void(*))) (ctrl_m_beta),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_n_beta),
// (signed(__cdecl*) (void(*))) (cmdln_ctrl_n),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_o),

(signed(__cdecl*) (void(*))) (cmdln_ctrl_p_beta),
// (signed(__cdecl*) (void(*))) (cmdln_ctrl_p),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_q),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_r),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_s),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_t),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_u_beta),
// (signed(__cdecl*) (void(*))) (cmdln_ctrl_u),
(signed(__cdecl*) (void(*))) (ctrl_v_beta),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_w_prep),
// (signed(__cdecl*) (void(*))) (cmdln_ctrl_w),

(signed(__cdecl*) (void(*))) (cmdln_ctrl_x),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_y_beta),
// (signed(__cdecl*) (void(*))) (cmdln_ctrl_y),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_z),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_lbracket),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_bslash),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_rbracket),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_asterisk),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_hash),

(signed(__cdecl*) (void(*))) (0x00)
};

auto signed(cache), (r);
auto signed(c);
// Not auto signed char(c);

auto signed short(flag);

auto COORD(coord);
// auto POINT(point);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(terminate) return(0x01);

// Exception
r = (*argp).tail;

if(r<((*argp).limit)) {
}

else {
--((*argp).p);
*((*argp).p) = ('\0');
printf("%s\n", "<< A character limit in one line has been reached.");
return(0x00);
}

// On the current Console Screen Buffer Info.
r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}


/*
r = cmdln_dbuff(argp);

if(!r) {
printf("%s", "<< Error at fn. cmdln_dbuff()");
return(0x00);
}
//*/


// Get a character (in the ASCII)
c = (signed) _getch();

(*argp).c = (c);


//* Support the arrow keys
if(!(c^(0xE0))) {
// get the sequential byte
r = _getch();
(*argp).c = (r);
r = support_arrowkeys(argp);
if(!r) printf("%s", "<< Error at fn. support_arrowkeys()");
/* to debug */
if(C_DBG) r = debug_monitor(argp);
return(0x01+(vu_beta_internal(argp)));
}
if(!c) {
// get the sequential byte
r = _getch();
(*argp).c = (r);
r = support_arrowkeys(argp);
if(!r) printf("%s", "<< Error at fn. support_arrowkeys()");
/* to debug */
if(C_DBG) r = debug_monitor(argp);
return(0x01+(vu_beta_internal(argp)));
}
//*/


if(c<(0x20)) {
// Directly access to a function with a vector table (using an array of offset pointers for functions)
r = (*(c+(fn))) (argp);
if(!r) printf("%s\n", "<< Oops, it has occurred an error at r = (*(c+(fn))) (argp)..");
}

else {
// flag for the clipboard, refer fn. cmdln_ctrl_y, vu_clip or..
XNOR((*argp).clip_reset);

if(c<(0x7F)) {
(*argp).wrap = (0x00);


r = cpy((*argp).craft, (*argp).p);
*((*argp).p) = (c);
((*argp).count)++;
((*argp).tail)++;
((*argp).p)++;
*((*argp).p) = ('\0');

r = ct_offset_out_of_last(' ',(*argp).init_p);
(*argp).offset_by_wrapping = (r);

r = cpy((*argp).p,(*argp).craft);
if(!r) (*argp).copied = (0x00);
else (*argp).copied = (0x01);


/* word-wrap */
// cumulate dead sp by wrapping words or not, refer at incl/cmdln.h or..
(*argp).cumul_lock = (0x00);

r = c_out_beta(-0x01+((*argp).p),argp);

if(!r) {
printf("%s", "<< Error at fn. c_out_beta()");
return(0x00);
}

r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);

r = c_outs_beta((*argp).p,argp);

/* word-wrap */
// also refer at fn. c_out_beta, fn. sustain, fn. connect_with_workspace, fn. ctrl_b_beta or..
(*argp).cumul_lock = (0x01);

if((*argp).copied) {
r = ct2(' ',(*argp).init_p);
if((*argp).csbi.srWindow.Right<(r)) (*argp).wrap = (0x00);
else {
r = ct2(' ',(*argp).craft);
if(r<(-coord.X+(0x01+((*argp).csbi.srWindow.Right)))) (*argp).wrap = (0x00);
else (*argp).wrap = (0x01);
}}
else (*argp).wrap = (0x00);


if((*argp).wrap) {
INC(coord.Y);
XOR(coord.X,coord.X);
coord.X = (coord.X+((*argp).offset_by_wrapping));
r = SetConsoleCursorPosition((*argp).s_out,coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

else {
r = SetConsoleCursorPosition((*argp).s_out,coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}}


/* Effectively refresh the console screen to save resources
r = ct_txt(ALIGN_TAB,(*argp).init_p);
r = (r%(0x01+((*argp).csbi.srWindow.Right)));

cache = ((*argp).q_refresh);
(*argp).q_refresh = (r);

if(!r) {
if(!(cache^(r))) {
}
else {
// quickly refresh a part of console screen.
r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");
}}

else {
if(!(cache^(r))) {
}
else {
if(cache<(r)) {
}
else {
r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");
}}}
//*/

}


/* to debug */
if(C_DBG) r = debug_monitor(argp);


return(0x01+(vu_beta_internal(argp)));
}
