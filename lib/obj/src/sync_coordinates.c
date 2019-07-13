/* **** Notes

Synchronise coordinates

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl sync_coordinates(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord), (coord_b);
auto signed(i), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

/*
r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}
//*/

/* Backup the workspace status */
coord_b.X = (signed short) ((*argp).depart.X);
coord_b.Y = (signed short) ((*argp).depart.Y);

coord.X = (0x00);
coord.Y = ((*argp).orig.Y);

r = sync_coordinates_internal(coord,(*argp).b,argp);

if(!r) printf("%s", "<< Error at fn. sync_coordinates_internal()");

/* Restore the one */
(*argp).depart.X = (coord_b.X);
(*argp).depart.Y = (coord_b.Y);

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