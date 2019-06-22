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

if((*k).clih.l) {
// for the snapshot CLI history
(*((*k).clih.t)).depart.Y = (coord.Y);
(*((*k).clih.l)).depart.Y = (coord.Y);
(*((*k).clih.b)).depart.Y = (coord.Y);
}

// also for the current knot on the console screen
(*k).depart.Y = (coord.Y);

r = c_outs((*k).p,argp);

/* It is empty ..or has occurred an error.
if(!r) {
printf("%s", "<< Error at fn. c_outs()");
return(0x00);
}
//*/

/*
r = SetConsoleCursorPosition((*argp).s_out, (*argp).depart);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

k = ((*k).d);

if(k) printf("\n");

return(0x01+(refresh_screen_internal(k,argp)));
}
