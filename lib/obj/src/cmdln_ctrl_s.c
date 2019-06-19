/* **** Notes

Press <Ctrl-S> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_s(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(command_mode);

auto COORD(coord);

auto KNOT(*cch);
auto signed(cache), (r);
// auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(command_mode) return(0x01);

INC(command_mode);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

/* to save */
r = cmdln_save_prep(argp);

if(!r) {
}

else {
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

XOR(command_mode,command_mode);

return(0x01);
}
