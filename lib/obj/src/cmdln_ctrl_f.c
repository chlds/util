/* **** Notes

Press <Ctrl-F> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_f(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(HT) = (0x09);
auto signed const(ALIGN_TAB) = (0x08);

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

// Internal Part.
cache = ((*argp).count);

if(!(cache^((*argp).tail))) {
}

else {
cache = ((*argp).count);
p = ((*argp).p);
((*argp).count)++;
((*argp).p)++;
// The External Part.

if(!(HT^(*p))) {
r = ncpy((*argp).craft, (*argp).init_p, cache);
r = ct_txt(ALIGN_TAB, (*argp).craft);
r = (r%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
coord.X = (coord.X+(r));
if(coord.X<(1+((*argp).csbi.srWindow.Right))) {
}
else {
INC(coord.Y);
cache = (1+((*argp).csbi.srWindow.Right));
coord.X = (-cache+(coord.X));
}}

else {
if(!(coord.X^((*argp).csbi.srWindow.Right))) {
XOR(coord.X, coord.X);
INC(coord.Y);
}
else {
INC(coord.X);
}}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

return(0x01);
}
