/* **** Notes

Press <Ctrl-C> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_c(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(command_mode);
extern signed(quit);
extern signed(terminate);

auto signed char(*label) = ("Command: ");

auto COORD(coord), (coord_b);
auto signed(i), (r);
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

r = sustain(argp);

if(!r) {
// It is empty ..or has occurred an error.
}

r = cmd_mode_prep(argp);

r = printf("%s", label);

r = ct(label);
(*argp).command_label = (r);

r = cmd_io(argp);

if(!r) {
printf("%s", "<< Error at fn. cmd_io()");
return(0x00);
}

/* case i. */
if(!(*((*argp).cmd_io.p))) {
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
return(0x01);
}

/* case ii. Display a help page. */
if(!('h'^(*((*argp).cmd_io.p)))) {
r = cmdln_help(argp);
if(!r) {
printf("%s", "<< Error at fn. cmdln_help()");
return(0x00);
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
return(0x01);
}

/* case iii. Jump to line N. */
// count the arguments.
r = ct_ars2((*argp).cmd_io.p);

/* It is empty ..or has occurred an error.
if(!r) {
printf("%s", "<< Error at fn. ct_ars2()");
return(0x00);
}
//*/

if(C_DBG) (*argp).cmd_io.args = (r);


/* Aux. */
XOR(flag,flag);
r = cv2d(10,&i,(*argp).cmd_io.p);
/* It is empty ..or has occurred an error.
if(!r) {
printf("%s", "<< Error at fn. cv2d()");
return(0x00);
}
//*/
r = find_knot(i,argp);
if(!r) XOR(flag,flag);
else XNOR(flag);


if(!flag) {
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

return(0x01);
}
