/* **** Notes

Refresh the console screen.

Remarks:
Along with fn. refresh_row_numbers
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl refresh_screen(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);

auto KNOT(*cache);
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);

system("cls");

r = display_header(argp);
if(!r) printf("%s", "<< Error at fn. display_header()");

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

r = sustain(argp);

if(!r) {
// It is empty ..or has occurred an error.
}

r = refresh_screen_internal(k,argp);

if(!r) {
printf("%s", "<< Error at fn. refresh_screen_internal()");
return(0x00);
}

/* restore coordinates for the workspace */
(*argp).depart.X = (0x00);
(*argp).depart.Y = (coord.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(r);
}
