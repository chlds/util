/* **** Notes

Connect a knot with the workspace.

Store on the workspace out of the current knot info.

Remarks:
Synchronise coordinates.
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
Refer at fn. sustain.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl connect_with_workspace(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);

auto COORD(coord), (coord_b);
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);
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

/* Internal Part */
(*argp).t = (k);
// connect a knot with the workspace.
r = cpy((*argp).init_p,(*((*argp).t)).p);
// set the three elements with the one.
(*argp).tail = (r);
(*argp).count = (0x00);
(*argp).p = ((*argp).init_p);
// connect snapshots with the one.
(*argp).clih.l = (SNAPSHOT*) ((*((*argp).t)).clih.l);
(*argp).clih.t = (SNAPSHOT*) ((*((*argp).t)).clih.t);
(*argp).clih.b = (SNAPSHOT*) ((*((*argp).t)).clih.b);
// set coordinates with the one.
(*argp).depart.X = ((*((*argp).t)).depart.X);
(*argp).depart.Y = ((*((*argp).t)).depart.Y);

// word-wrap
(*argp).cumul = ((*((*argp).t)).cumul);

// output..

/* External Part. */
coord_b.X = ((*argp).depart.X);
coord_b.Y = ((*argp).depart.Y);

/* i.e.,
coord_b.X = ((*((*argp).t)).depart.X);
coord_b.Y = ((*((*argp).t)).depart.Y);
//*/

r = SetConsoleCursorPosition((*argp).s_out, coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
