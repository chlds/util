/* **** Notes

(Quickly..?) calculate the caret coordinates on the console screen.

Remarks:
Based on fn. vu_refresh
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl vu_qrefresh(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);

auto COORD(coord), (coord_b);
auto signed(r);
auto signed short(col);
auto signed short(flag);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);

r = sustain(argp);

if(!r) {
// It is empty ..or has occurred an error.
}

/*
system("cls");
r = display_header(argp);
if(!r) printf("%s", "<< Error at fn. display_header()");
//*/

//* Aux.
r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
(*argp).cached_coord.X = ((*argp).csbi.dwCursorPosition.X);
(*argp).cached_coord.Y = ((*argp).csbi.dwCursorPosition.Y);
//*/

coord_b.X = ((*argp).depart.X);
coord_b.Y = ((*argp).depart.Y);

r = SetConsoleCursorPosition((*argp).s_out,coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

XOR(col,col);

r = vu_qrefresh_internal(col,(*argp).t,argp);

if(!r) {
printf("<< Error at fn. vu_qrefresh_internal()");
return(0x00);
}

// There is room for improvement..
r = clearhere(argp);

if(!r) {
printf("%s", "<< Error at fn. clearhere()");
return(0x00);
}

/* restore coordinates for the workspace
(*argp).depart.X = (0x00);
(*argp).depart.Y = (coord.Y);
//*/

r = SetConsoleCursorPosition((*argp).s_out,(*argp).cached_coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
