/* **** Notes

Find whitespace.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_find_ws(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(SP) = (' ');
auto signed char const(HT) = ('\t');

auto COORD(coord);
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

r = ((*argp).count);

if(!(r^((*argp).tail))) return(0x01);

if(!(SP^(*((*argp).p)))) return(0x00);
if(!(HT^(*((*argp).p)))) return(0x00);

r = cmdln_ctrl_f(argp);

return(0x01+(cmdln_find_ws(argp)));
}
