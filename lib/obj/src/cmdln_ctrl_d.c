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
auto signed const(ALIGN_TAB) = (0x08);
auto signed char const(HT) = (0x09);

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

cache = ((*argp).count);

if(!(cache^((*argp).tail))) {
}

else {
// Internal Part.
DEC((*argp).tail);
c = (*((*argp).p));
r = cpy((*argp).craft, 1+((*argp).p));
r = cpy((*argp).p, (*argp).craft);
// External Part.
if(!(c^(HT))) {
r = (coord.X);
r = (r%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
cache = (r);
}
else {
XOR(cache,cache);
INC(cache);
}
// Output
r = _cputs((*argp).craft);
if(r) printf("%s", "<< Error at fn. _cputs/_cputws()");
while(cache) {
r = _putch(' ');
if(!(r^(EOF))) printf("%s", "<< Error at fn. _putch/_putwch()");
--cache;
}
// Set the caret.
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

// printf("%s\n", "Ctrl-D;");

return(0x01);
}
