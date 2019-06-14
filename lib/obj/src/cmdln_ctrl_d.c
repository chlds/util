/* **** Notes

Press <Ctrl-D> to invoke the function.

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

signed(__cdecl cmdln_ctrl_d(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(HT) = (0x09);

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

r = ((*argp).count);

if(!(r^((*argp).tail))) {
}

else {
// Internal Part.
DEC((*argp).tail);
cache = ct_txt(ALIGN_TAB, (*argp).init_p);
r = cpy((*argp).craft, 1+((*argp).p));
r = cpy((*argp).p, (*argp).craft);
// External Part.
r = ct_txt(ALIGN_TAB, (*argp).init_p);
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
if(debugging) r = _putch('*');
else r = _putch(' ');
if(!(r^(EOF))) printf("%s", "<< Error at fn. _putch/_putwch()");
--cache;
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

// printf("%s", "Ctrl-D;");

return(0x01);
}
