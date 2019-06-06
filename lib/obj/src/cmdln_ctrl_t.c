/* **** Notes

Press <Ctrl-T> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_t(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(SP) = (0x20);
auto signed char const(HT) = (0x09);
auto signed const(ALIGN_TAB) = (0x08);

auto signed char(*p);

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

XOR(flag,flag);

r = ((*argp).count);

if(!(r^((*argp).tail))) {
}

else {
r = cmdln_ctrl_f(argp);
if(!(SP^(*((*argp).p)))) {
XNOR(flag);
}
if(!flag) {
if(!(HT^(*((*argp).p)))) {
}
else {
r = cmdln_ctrl_g(argp);
}}}

/*
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

return(0x01);
}
