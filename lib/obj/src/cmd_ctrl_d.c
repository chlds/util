/* **** Notes

Press <Ctrl-D> to invoke the function.

in the Command Mode

Delete a character on the current caret.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmd_ctrl_d(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(HT) = (0x09);

auto signed char(AK) = ('*');
auto signed char(WS) = (' ');

auto signed char(*p);

auto COORD(coord);
auto signed(cache), (r);
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

r = ((*argp).cmd_io.count);

if(!(r^((*argp).cmd_io.tail))) {
}

else {
// Internal Part.
DEC((*argp).cmd_io.tail);
cache = ct_txt(ALIGN_TAB, (*argp).cmd_io.p);
r = cpy((*argp).craft, 1+((*argp).cmd_io.caret));
r = cpy((*argp).cmd_io.caret, (*argp).craft);
// External Part.
r = ct_txt(ALIGN_TAB, (*argp).cmd_io.p);
cache = (-r+(cache));
// Output
r = c_outs((*argp).craft,argp);
/* It is empty ..or has an error.
if(!r) {
printf("%s", "<< Error at fn. c_outs()");
return(0x00);
}
//*/
while(cache) {
if(C_DBG) r = c_out(&AK,argp);
else r = c_out(&WS,argp);
if(!r) {
printf("%s", "<< Error at fn. c_out()");
return(0x00);
}
--cache;
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

return(0x01);
}
