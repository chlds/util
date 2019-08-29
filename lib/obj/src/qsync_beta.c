/* **** Notes

Quickly synchronise coordinates

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure

Use e.g., after executing fn. cmdln_ctrl_m_beta.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl qsync_beta(KNOT(*k),CMDLN_STAT(*argp))) {

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

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);

coord_b.X = ((*argp).csbi.srWindow.Top);
coord_b.Y = ((*argp).csbi.srWindow.Bottom);

r = qsync_beta_internal(coord_b,k,argp);

if(!r) printf("%s", "<< Error at fn. qsync_beta_internal()");

/* Restore workspace */
r = cpy((*argp).init_p,(*k).p);
(*argp).tail = (r);
(*argp).count = (0x00);
(*argp).p = ((*argp).init_p);
// sync snapshots with the one
(*argp).clih.b = ((*k).clih.b);
(*argp).clih.t = ((*k).clih.t);
(*argp).clih.l = ((*k).clih.l);
// also sync coordinates with the one
(*argp).depart.X = ((*k).depart.X);
(*argp).depart.Y = ((*k).depart.Y);

/* come back */
coord_b.Y = (coord_b.X);
coord_b.X = (0x00);

r = SetConsoleCursorPosition((*argp).s_out,coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

r = SetConsoleCursorPosition((*argp).s_out,coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(r);
}
