/* **** Notes

Console output

Output characters.

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

signed(__cdecl c_outs(signed char(*di), CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(ALIGN_TAB) = (0x08);
auto signed char const(HT) = (0x09);

auto COORD(coord);
auto signed(cache), (r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!argp) return(0x00);

if(!(*di)) return(0x00);

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

// To output
r = c_out(di,argp);

if(!r) {
}

INC(di);

return(0x01+(c_outs(di,argp)));
}
