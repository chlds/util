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

r = GetConsoleScreenBufferInfo((*argp).s_out, &((*argp).csbi));

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. GetConsoleScreenBufferInfo() with error no. ", r);
return(0x00);
}

else {
coord.X = ((*argp).csbi.srWindow.Left);
coord.Y = ((*argp).csbi.srWindow.Bottom);
}

if(!((*argp).hist)) {
r = cmdln_history(argp);
if(!r) printf("%s\n", "<< Error at fn. cmdln_history(argp)");
}

r = cmdln_undo(argp);

if(!r) {
}

// Set the history flag to take a snapshot for history only once
// To re-do using fn. cmdln_ctrl_rbracket
// Also refer at fn. cmdln_undo() for the history flag.
XNOR((*argp).hist);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

// Internal Part.

// External Part.

// printf("%s", "Ctrl-[;");

return(0x01);
}
