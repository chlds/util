/* **** Notes

Press <Ctrl-]> to invoke the function.

Re-do.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_rbracket(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto signed(cache), (r);

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

r = cmdln_redo(argp);

// It is empty ..or has occurred an error.
if(!r) return(0x01);

(*((*argp).t)).clih.t = ((*argp).clih.t);
(*((*argp).t)).clih.l = ((*argp).clih.l);
(*((*argp).t)).clih.b = ((*argp).clih.b);

r = SetConsoleCursorPosition((*argp).s_out, (*argp).depart);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
