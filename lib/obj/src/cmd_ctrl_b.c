/* **** Notes

Press <Ctrl-B> to invoke the function.

in the Command Mode

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmd_ctrl_b(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
// auto signed char const(SP) = (0x20);
auto signed char const(HT) = (0x09);

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

if((*argp).cmd_io.count) {

DEC((*argp).cmd_io.count);
DEC((*argp).cmd_io.caret);

// External Part.
c = (*((*argp).cmd_io.caret));

if(!(c^(HT))) {

r = ncpy((*argp).craft, (*argp).cmd_io.p, (*argp).cmd_io.count);
r = ct_only('\t', (*argp).craft);

if(!r) {

r = ((*argp).cmd_io.count%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
coord.X = (-r+(coord.X));
}

else {
// back-ward search the last tab position.
XOR(cache,cache);
i = ((*argp).cmd_io.count);
while(i) {
c = (*(--i+((*argp).craft)));
if(!(c^(HT))) break;
cache++;
}
r = (cache%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
coord.X = (-r+(coord.X));
}}

else {
// It is not a tab i.e., (!0x09).
DEC(coord.X);
}

// Coordinates

if(!(coord.Y^((*argp).depart_for_cmd_io.Y))) {
}

else {
if(coord.X<(0x00)) {
DEC(coord.Y);
cache = ((*argp).csbi.srWindow.Right);
coord.X = (cache+(INC(coord.X)));
}}}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
