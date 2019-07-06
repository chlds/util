/* **** Notes

Console output

Output character lines at the current caret position.

Output a tab as whitespace

Remarks:
Based on fn. c_out
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_outll_partially(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord), (coord_b);
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

// firstly secure the characters in the delegate list associated with the current knot
r = sustain(argp);

if(!r) {
// It is empty ..or has occurred an error.
}

// clear background for the body
r = clearbelow(argp);

if(!r) printf("%s", "<< Error at fn. clearbelow()");

// and output
i = c_outll_internal((*argp).t,argp);

/* It is empty ..or has occurred an error.
if(!i) {
}
//*/

/* restore coordinates for the workspace */
(*argp).depart.X = (0x00);
(*argp).depart.Y = (coord.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(i);
}
