/* **** Notes

Read and write on the CUI

Remarks:
UN-COMPLETED
*/


# define debug_flag (0x01)

# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

# define COORDS (0x01+(0x03))
# define COUNT_FN (0x01+(0x20))
# define OBJS (0x01+(0x03))

signed(__cdecl vu_internal(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(terminate);

auto signed(__cdecl*(fn[COUNT_FN])) (void(*argp)) = {

(signed(__cdecl*) (void(*))) (cmdln_ctrl_at),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_a),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_b),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_c),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_d),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_e),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_f),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_g),

(signed(__cdecl*) (void(*))) (cmdln_ctrl_h),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_i),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_j),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_k),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_l),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_m),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_n),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_o),

(signed(__cdecl*) (void(*))) (cmdln_ctrl_p),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_q),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_r),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_s),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_t),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_u),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_v),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_w),

(signed(__cdecl*) (void(*))) (cmdln_ctrl_x),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_y),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_z),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_lbracket),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_bslash),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_rbracket),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_asterisk),
(signed(__cdecl*) (void(*))) (cmdln_ctrl_hash),

(signed(__cdecl*) (void(*))) (0x00)
};

/* for 7-bit characters
auto signed char const(BS) = (8);
auto signed char const(LF) = ('\n');
auto signed char const(CR) = ('\r');
auto signed char const(ESC) = (27);
auto signed char const(SP) = (' ');
//*/

auto signed(cache), (i), (r);
auto signed(c);
// Not auto signed char(c);

auto signed short(flag);

auto COORD(coord);
auto POINT(point);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(terminate) return(0x01);

// Exception
cache = (*argp).tail;

if(cache<((*argp).limit)) {
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

// Get a character (in the ASCII)
c = (signed) _getch();

(*argp).c = (c);

if(c<(0x20)) {
// Directly access to a function with a vector table (using an array of offset pointers for functions)
r = (*(c+(fn))) (argp);
if(!r) printf("%s\n", "<< Oops, it has occurred an error at r = (*(c+(fn))) (argp)..");
}

else {
if(c<(0x7F)) {

cache = ((*argp).count);

if(!(cache^((*argp).tail))) {
*((*argp).p) = (c);
((*argp).p)++;
((*argp).count)++;
((*argp).tail)++;
*((*argp).p) = ('\0');
}

else {
r = cpy((*argp).craft, (*argp).p);
if(!r) {
printf("%s", "<< Error at fn. cpy()");
return(0x00);
}
*((*argp).p) = (c);
((*argp).p)++;
((*argp).count)++;
((*argp).tail)++;
*((*argp).p) = ('\0');
r = append2((*argp).p, (*argp).craft);
if(!r) {
printf("%s", "<< Error at fn. append2()");
return(0x00);
}
XNOR(flag);
}

// External Part.
r = _putch(c);
if(!(r^(EOF))) {
printf("%s\n", "<< Error at fn. _putch/_putwch()");
return(0x00);
}

if(flag) {
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
r = _cputs((*argp).craft);
if(r) {
printf("%s\n", "<< Error at fn. _cputs/_cputws()");
return(0x00);
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}}}

/* to debug */
if(debug_flag) r = debug_monitor(argp);

return(0x01+(vu_internal(argp)));
}
