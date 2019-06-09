/* **** Notes

Press <Ctrl-[> to invoke the function.

Undo.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
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

/* **** CODE/TEXT */
if(!argp) return(0x00);

/*
p = ((*argp).init_p);
*(p+((*argp).tail)) = ('\0');
//*/

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
