/* **** Notes

Press <Ctrl-F> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmd_ctrl_f(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(HT) = (0x09);

auto signed char(*p);

auto COORD(coord);
auto signed(r);
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

r = ((*argp).cmd_io.count);

if(!(r^((*argp).cmd_io.tail))) {
}

else {
p = ((*argp).cmd_io.caret);
((*argp).cmd_io.count)++;
((*argp).cmd_io.caret)++;
// External Part.
if(!(HT^(*p))) {
r = ncpy((*argp).craft, (*argp).cmd_io.p, r);
r = ct_txt(ALIGN_TAB, (*argp).craft);
r = (r%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
coord.X = (coord.X+(r));
}
else INC(coord.X);

r = (1+((*argp).csbi.srWindow.Right));

if(coord.X<(r)) {
}

else {
INC(coord.Y);
coord.X = (-r+(coord.X));
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

return(0x01);
}
