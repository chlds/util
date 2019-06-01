/* **** Notes

Press <Ctrl-Q> to invoke the function.

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
extern signed(quit_vu);

auto COORD(coord);
auto signed(i), (r);

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

INC(quit_vu);

// printf("%s", "Ctrl-Q;");

return(0x01);
}
