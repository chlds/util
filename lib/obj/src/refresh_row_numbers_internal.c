/* **** Notes

Refresh row numbers on the console screen.

k: Put the address of the KNOT structure at.
argp: Put the address of the CMDLN_STAT structure at.

Remarks:
Along with fn. refresh_row_numbers
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl refresh_row_numbers_internal(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto signed(i), (r);

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

r = ((*argp).csbi.srWindow.Bottom);

if(r<(coord.Y)) return(0x00);

if((*k).clih.l) {
// for the snapshot CLI history
(*((*k).clih.t)).depart.Y = (coord.Y);
(*((*k).clih.l)).depart.Y = (coord.Y);
(*((*k).clih.b)).depart.Y = (coord.Y);
}

// also for the current knot on the console screen
(*k).depart.Y = (coord.Y);

k = ((*k).d);
return(0x01+(refresh_row_numbers_internal(k,argp)));
}