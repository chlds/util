/* **** Notes

Console output

Output character lines.

Output a tab as whitespace

Remarks:
Based on fn. c_out
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_outll_internal(KNOT(*k),CMDLN_STAT(*argp))) {

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

(*k).depart.X = (0x00);
(*k).depart.Y = (coord.Y);

r = c_outs((*k).p,argp);

/* It is empty ..or has occurred an error.
if(!r) {
}
//*/

k = ((*k).d);

if(k) printf("\n");

return(0x01+(c_outll_internal(k,argp)));
}
