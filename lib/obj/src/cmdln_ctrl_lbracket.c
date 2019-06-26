/* **** Notes

Press <Ctrl-[> to invoke the function.

Undo.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
Refer at fn. vu_internal and incl/cmdln.h for the cmdln_stat.hist history flag.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_lbracket(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(terminate);

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

/*
r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}
//*/

if(!((*argp).hist)) {
XNOR((*argp).hist);
r = cmdln_history(argp);
if(!r) printf("%s\n", "<< Error at fn. cmdln_history(argp)");
/*
(*argp).clih.t = ((*((*argp).clih.t)).s);
// Also
(*((*argp).t)).clih.t = ((*argp).clih.t);
(*((*argp).t)).clih.l = ((*argp).clih.l);
(*((*argp).t)).clih.b = ((*argp).clih.b);
//*/
}

r = cmdln_undo(argp);

if(!r) {
}

// Set the history flag to take a snapshot for history only once
// To re-do using fn. cmdln_ctrl_rbracket
// Also refer at fn. cmdln_ctrl_w(or *)_prep() for the history flag.

/* feed back to the current knot out of the workspace */
(*((*argp).t)).clih.t = ((*argp).clih.t);
(*((*argp).t)).clih.l = ((*argp).clih.l);
(*((*argp).t)).clih.b = ((*argp).clih.b);

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
