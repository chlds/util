/* **** Notes

Quickly synchronise coordinates

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl qsync_beta_internal(COORD(deadline),KNOT(*k),CMDLN_STAT(*argp))) {

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

/* sync coordinates */
(*k).depart.X = (0x00);
(*k).depart.Y = (coord.Y);

/* sync coordinates with workspace
(*argp).depart.X = ((*k).depart.X);
(*argp).depart.Y = ((*k).depart.Y);
//*/

/* output */
if((*k).p) r = c_outs_beta((*k).p,argp);

if(!r) {
}

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);

XOR(coord.X,coord.X);
INC(coord.Y);

if(deadline.Y<(coord.Y)) return(0x01);

r = SetConsoleCursorPosition((*argp).s_out,coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

k = ((*k).d);

return(0x01+(qsync_beta_internal(deadline,k,argp)));
}
