/* **** Notes

Clear the header.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl clearheader(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord), (coord_b);
auto signed(i), (l), (r);
auto signed(c);
auto signed short(flag);
auto signed char(ws) = (' ');

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord_b.X = ((*argp).csbi.dwCursorPosition.X);
coord_b.Y = ((*argp).csbi.dwCursorPosition.Y);
}

coord.X = (0x00);
coord.Y = (0x00);

//*
r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

l = (0x01+((*argp).csbi.srWindow.Right));
l = (l*(HEADER_ROWS));

r = FillConsoleOutputCharacter((*argp).s_out,ws,l,coord,&i);

if(!r) {
r = GetLastError();
printf("%s%d", "<< Error at fn. FillConsoleOutputCharacter() with no. ", r);
return(0x00);
}

r = SetConsoleCursorPosition((*argp).s_out, coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with no. ", r);
return(0x00);
}

return(0x01);
}
