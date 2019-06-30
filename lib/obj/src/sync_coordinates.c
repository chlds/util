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

signed(__cdecl sync_coordinates(KNOT(*k),CMDLN_STAT(*argp))) {

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

/* set the first coordinates */
coord_b.X = (signed short) (0x00);
coord_b.Y = (signed short) ((*argp).orig.Y);

i = sync_coordinates_internal(coord_b,k,argp);

if(!i) printf("%s", "<< Error at fn. sync_coordinates_internal()");

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(i);
}
