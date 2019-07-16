/* **** Notes

Refresh the console screen at the current caret position.

Output as foreground characters, refer at fn. clear_rows.

Remarks:
Along with fn. clear_rows
Also refer at fn. refresh_row_numbers
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl refresh_screen_at_the_caret_pos(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);

auto KNOT(*cache);
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);
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

/* Internal Part. */
r = sustain(argp);

if(!r) {
// It is empty ..or has occurred an error.
}

/* External Part. */
r = clear_rows(argp);

if(!r) printf("%s", "<< Error at fn. clear_rows()");

if(C_DBG) (*argp).cleared_rows = (r);

r = refresh_screen_internal(k,argp);

if(!r) {
printf("%s", "<< Error at fn. refresh_screen_internal()");
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
