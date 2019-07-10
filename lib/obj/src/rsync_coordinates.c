/* **** Notes

Relatively synchronise coordinates

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl rsync_coordinates(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord), (coord_b);
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

/* Backup the workspace status i.e., for a knot associated with workspace and for the workspace */
coord_b.X = (signed short) ((*argp).depart.X);
coord_b.Y = (signed short) ((*argp).depart.Y);

r = rsync_coordinates_internal(coord,k,argp);

if(!r) printf("%s", "<< Error at fn. rsync_coordinates_internal()");

/* Restore the ones */
(*k).depart.X = (coord_b.X);
(*k).depart.Y = (coord_b.Y);
(*argp).depart.X = ((*k).depart.X);
(*argp).depart.Y = ((*k).depart.Y);

/*
r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

return(r);
}
