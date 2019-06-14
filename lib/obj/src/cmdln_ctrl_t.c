/* **** Notes

Press <Ctrl-T> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_t(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(SP) = (' ');
auto signed char const(HT) = ('\t');
// auto signed char const(SP) = (0x20);
// auto signed char const(HT) = (0x09);

auto signed char(*p);

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
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

r = ((*argp).count);

if(!(r^((*argp).tail))) return(0x01);

r = cmdln_ctrl_f(argp);

if(!r) printf("%s", "<< Error at fn. cmdln_ctrl_f()");

r = ((*argp).count);

if(!(r^((*argp).tail))) return(0x01);

if(!(HT^(*((*argp).p)))) return(0x01);

if(SP^(*((*argp).p))) {
if(!(SP^(*(-1+((*argp).p))))) return(0x01);
if(!(HT^(*(-1+((*argp).p))))) return(0x01);
}

return(0x01+(cmdln_ctrl_t(argp)));
}
