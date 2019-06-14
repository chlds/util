/* **** Notes

Press <Ctrl-W> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_w(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(SP) = (' ');
auto signed char const(HT) = ('\t');
// auto signed char const(SP) = (0x20);
// auto signed char const(HT) = (0x09);

auto COORD(coord);
auto signed(cache), (i), (r);
auto signed(c);
auto signed short(flag);

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

if(!((*argp).count)) return(0x01);

r = cmdln_ctrl_b(argp);

if(!r) printf("%s", "<< Error at fn. cmdln_ctrl_b()");

if(!((*argp).count)) {
r = cmdln_ctrl_d(argp);
if(!r) printf("%s", "<< Error at fn. cmdln_ctrl_d()");
return(0x01);
}

if(!(HT^(*((*argp).p)))) {
r = cmdln_ctrl_d(argp);
if(!r) printf("%s", "<< Error at fn. cmdln_ctrl_d()");
return(0x01);
}

if(SP^(*((*argp).p))) {
if(!(SP^(*(-1+((*argp).p))))) {
r = cmdln_ctrl_d(argp);
if(!r) printf("%s", "<< Error at fn. cmdln_ctrl_d()");
return(0x01);
}
if(!(HT^(*(-1+((*argp).p))))) {
r = cmdln_ctrl_d(argp);
if(!r) printf("%s", "<< Error at fn. cmdln_ctrl_d()");
return(0x01);
}}

r = cmdln_ctrl_d(argp);

if(!r) {
printf("%s", "<< Error at fn. cmdln_ctrl_d()");
return(0x00);
}

return(0x01+(cmdln_ctrl_w(argp)));
}
