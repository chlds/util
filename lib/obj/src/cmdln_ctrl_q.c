/* **** Notes

Press <Ctrl-Q> to invoke the function.

Quit.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_q(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(command_mode);
extern signed(quit);
extern signed(terminate);

auto signed char(*label) = ("Cancel (c) or Quit (q): ");

auto COORD(coord);
auto signed(i), (r);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(command_mode) return(0x01);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

r = cmd_mode_prep(argp);

if(!r) {
printf("%s", "<< Error at fn. cmd_mode_prep()");
return(0x00);
}

printf("%s", label);

r = ct(label);
(*argp).command_label = (r);

r = cmd_io(argp);

if(!r) {
printf("%s", "<< Error at fn. cmd_io()");
return(0x00);
}

c = (signed char) (*((*argp).cmd_io.p));

if(!(c^('q'))) {
XNOR(quit);
XNOR(terminate);
return(0x01);
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
