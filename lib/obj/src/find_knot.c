/* **** Notes

Find a knot.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl find_knot(signed(n),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);

auto COORD(coord), (coord_b);
auto signed(r);

/* **** CODE/TEXT */
if(n<(0x00)) return(0x00);
if(!argp) return(0x00);

cache = ((*argp).b);

r = find_knot_internal(n,cache,argp);

if(!r) {
printf("%s", "<< Error at fn. find_knot_internal()");
return(0x00);
}

(*argp).nknot = (-1+(r));

coord_b.X = ((*((*argp).t)).depart.X);
coord_b.Y = ((*((*argp).t)).depart.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
