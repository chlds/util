/* **** Notes

Quickly refresh a part of the console screen.

Remarks:
Along with fn. refresh_row_numbers
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl qrefresh(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);
auto COORD(coord), (coord_b);
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);

r = sustain(argp);

if(!r) {
// It is empty ..or has occurred an error.
}

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);

coord_b.X = (0x00);
coord_b.Y = ((*argp).depart.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

r = rsync_coordinates((*argp).t,argp);

if(!r) {
printf("%s", "<< Error at fn. sync_coordinates()");
return(0x00);
}

r = c_outll_partially(argp);

if(!r) {
printf("%s", "<< Error at fn. c_outll_partially()");
return(0x00);
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(r);
}
