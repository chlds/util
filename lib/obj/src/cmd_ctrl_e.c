/* **** Notes

Press <Ctrl-E> to invoke the function.

in the Command Mode

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmd_ctrl_e(CMDLN_STAT(*argp))) {

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

// Internal Part.
r = ct((*argp).cmd_io.caret);
(*argp).cmd_io.caret = (r+((*argp).cmd_io.caret));
// Also
cache = ((*argp).cmd_io.count);
(*argp).cmd_io.count = ((*argp).cmd_io.tail);

// External Part.
r = ncpy((*argp).craft, (*argp).cmd_io.p, cache);
r = ct_txt(ALIGN_TAB, (*argp).craft);
cache = (r);

r = ct_txt(ALIGN_TAB, (*argp).cmd_io.p);
r = (-cache+(r));

coord.X = (coord.X+(r));

if(coord.X<(1+((*argp).csbi.srWindow.Right))) {
}

else {
while(1) {
INC(coord.Y);
cache = (1+((*argp).csbi.srWindow.Right));
coord.X = (-cache+(coord.X));
if(coord.X<(1+((*argp).csbi.srWindow.Right))) break;
}}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

// printf("%s\n", "Ctrl-E;");

return(0x01);
}
