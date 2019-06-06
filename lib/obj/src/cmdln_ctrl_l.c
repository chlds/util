/* **** Notes

Press <Ctrl-L> to invoke the function.

Look for the indent or space behind the caret.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_l(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(WS) = (' ');
auto signed char(HT) = ('\t');

// auto signed char(WS) = (0x20);
// auto signed char(HT) = (0x09);

auto COORD(coord);
auto signed(i), (r);
auto signed short(flag);

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

r = cmdln_ctrl_b(argp);

if(!r) {
printf("%s", "<< Error at fn. cmdln_ctrl_b() in fn. cmdln_ctrl_l()");
return(0x00);
}

if((*argp).count) {
if(!(WS^(*((*argp).p)))) {
OR(flag,0x01);
}
if(!flag) {
if(!(HT^(*((*argp).p)))) {
}
else {
r = cmdln_ctrl_l(argp);
if(!r) {
printf("%s", "<< Error at fn. cmdln_ctrl_l()");
return(0x00);
}}}}

// printf("%s", "Ctrl-L;");

return(0x01);
}
