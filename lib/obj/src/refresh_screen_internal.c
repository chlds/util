/* **** Notes

Output character lines out of the argument

k: Put the address of the <knot> structure at.
argp: Put the address of the CMDLN_STAT structure at.

Remarks:
Along with fn. refresh_screen
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl refresh_screen_internal(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
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

r = ((*argp).csbi.srWindow.Bottom);
if(r<(coord.Y)) return(0x00);

// also reset coordinates of the current knot and the workspace for the console screen
(*k).depart.Y = (coord.Y);
(*argp).depart.Y = ((*k).depart.Y);

r = c_outs((*k).p,argp);

/* It is empty ..or has occurred an error.
if(!r) {
printf("%s", "<< Error at fn. c_outs()");
return(0x00);
}
//*/

k = ((*k).d);

if(k) printf("\n");

return(0x01+(refresh_screen_internal(k,argp)));
}
