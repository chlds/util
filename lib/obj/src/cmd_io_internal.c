/* **** Notes

Read and write on the CUI

Use the function in the command mode.

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

signed(__cdecl cmd_io_internal(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);
extern signed(command_mode);
extern signed(cmd_io_terminate);

auto signed char const(HT) = ('\t');
// auto signed char const(HT) = (0x09);

static signed(__cdecl*(fn[COUNT_FN])) (void(*argp)) = {

(signed(__cdecl*) (void(*))) (cmd_ctrl_at),
(signed(__cdecl*) (void(*))) (cmd_ctrl_a),
(signed(__cdecl*) (void(*))) (cmd_ctrl_b),
(signed(__cdecl*) (void(*))) (cmd_ctrl_c),
(signed(__cdecl*) (void(*))) (cmd_ctrl_d),
(signed(__cdecl*) (void(*))) (cmd_ctrl_e),
(signed(__cdecl*) (void(*))) (cmd_ctrl_f),
(signed(__cdecl*) (void(*))) (cmd_ctrl_g),

(signed(__cdecl*) (void(*))) (cmd_ctrl_h),
(signed(__cdecl*) (void(*))) (cmd_ctrl_i),
(signed(__cdecl*) (void(*))) (cmd_ctrl_j),
(signed(__cdecl*) (void(*))) (cmd_ctrl_k),
(signed(__cdecl*) (void(*))) (cmd_ctrl_l),
(signed(__cdecl*) (void(*))) (cmd_ctrl_m),
(signed(__cdecl*) (void(*))) (cmd_ctrl_n),
(signed(__cdecl*) (void(*))) (cmd_ctrl_o),

(signed(__cdecl*) (void(*))) (cmd_ctrl_p),
(signed(__cdecl*) (void(*))) (cmd_ctrl_q),
(signed(__cdecl*) (void(*))) (cmd_ctrl_r),
(signed(__cdecl*) (void(*))) (cmd_ctrl_s),
(signed(__cdecl*) (void(*))) (cmd_ctrl_t),
(signed(__cdecl*) (void(*))) (cmd_ctrl_u),
(signed(__cdecl*) (void(*))) (cmd_ctrl_v),
// (signed(__cdecl*) (void(*))) (cmd_ctrl_w_prep),
(signed(__cdecl*) (void(*))) (cmd_ctrl_w),

(signed(__cdecl*) (void(*))) (cmd_ctrl_x),
(signed(__cdecl*) (void(*))) (cmd_ctrl_y),
(signed(__cdecl*) (void(*))) (cmd_ctrl_z),
(signed(__cdecl*) (void(*))) (cmd_ctrl_lbracket),
(signed(__cdecl*) (void(*))) (cmd_ctrl_bslash),
(signed(__cdecl*) (void(*))) (cmd_ctrl_rbracket),
(signed(__cdecl*) (void(*))) (cmd_ctrl_asterisk),
(signed(__cdecl*) (void(*))) (cmd_ctrl_hash),

(signed(__cdecl*) (void(*))) (0x00)
};

auto signed char(*p);

auto signed(cache), (i), (r);
auto signed(c);
// Not auto signed char(c);

auto signed short(flag);

auto COORD(coord);
// auto POINT(point);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(cmd_io_terminate) return(0x01);

// Exception
cache = (*argp).cmd_io.tail;

if(cache<((*argp).cmd_io.limit)) {
}

else {
--((*argp).cmd_io.caret);
*((*argp).cmd_io.caret) = ('\0');
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

// Get a character (in the ASCII)
c = (signed) _getch();

//* Irregular
if(!(c^(0xE0))) {
// Automatically get the sequential byte
r = _getch();
return(0x01+(cmd_io_internal(argp)));
}

if(!c) {
// Automatically get the sequential byte
r = _getch();
return(0x01+(cmd_io_internal(argp)));
}
//*/

(*argp).cmd_io.c = (c);

if(c<(0x20)) {
// Directly access to a function with a vector table (using an array of offset pointers for functions)
r = (*(c+(fn))) (argp);
if(!r) printf("%s\n", "<< Oops, it has occurred an error at r = (*(c+(fn))) (argp)..");
}

else {
if(c<(0x7F)) {

cache = ((*argp).cmd_io.count);

if(!(cache^((*argp).cmd_io.tail))) XOR(flag,flag);

else {
r = cpy((*argp).craft, (*argp).cmd_io.caret);
if(!r) {
printf("%s", "<< Error at fn. cpy()");
return(0x00);
}
XNOR(flag);
}

*((*argp).cmd_io.caret) = (c);

// External Part.
r = c_out((*argp).cmd_io.caret,argp);

if(!r) {
printf("%s", "<< Error at fn. c_out()");
return(0x00);
}

((*argp).cmd_io.caret)++;
((*argp).cmd_io.count)++;
((*argp).cmd_io.tail)++;
*((*argp).cmd_io.caret) = ('\0');

if(flag) {
r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

r = cpy((*argp).cmd_io.caret,(*argp).craft);

r = c_outs((*argp).cmd_io.caret,argp);
if(!r) return(0x00);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}}}

/* to debug */
// if(C_DBG) r = debug_monitor(argp);

return(0x01+(cmd_io_internal(argp)));
}
