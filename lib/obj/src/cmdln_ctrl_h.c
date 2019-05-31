/* **** Notes

Press <Ctrl-H> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_h(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(ALIGN_TAB) = (0x08);
auto signed char const(HT) = (0x09);

auto COORD(coord);
auto signed(cache), (i), (r);
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

/* Monitor
printf("%s%d", ", Current X: ", (*argp).csbi.dwCursorPosition.X);
printf("%s%d", ", Current Y: ", (*argp).csbi.dwCursorPosition.Y);
//*/

// The Internal Part.
if((*argp).count) {
// cache = ((*argp).count);
// if(!(cache^((*argp).tail))) DEC((*argp).tail);
// *(--((*argp).p)) = ('\0');
// --((*argp).tail);
--((*argp).count);
--((*argp).p);

// The External Part.
c = (*((*argp).p));

if(!(c^(HT))) {
// It is a tab i.e., (0x09).

r = ncpy((*argp).craft, (*argp).init_p, (*argp).count);

r = ct_only('\t', (*argp).craft);

if(!r) {
r = ((*argp).count%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
if(!(coord.Y^((*argp).depart.Y))) {
coord.X = (-r+(coord.X));
}
else {
r = (-r+(coord.X));
if(r<(0x00)) {
coord.X = (++r+((*argp).csbi.srWindow.Right));
DEC(coord.Y);
}
else {
coord.X = (r);
}}}

else {
// back-ward search the last tab position.
XOR(cache,cache);
i = ((*argp).count);
while(i) {
c = (*(--i+((*argp).craft)));
if(!(c^(HT))) break;
cache++;
}
r = (cache%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
if(!(coord.Y^((*argp).depart.Y))) {
coord.X = (-r+(coord.X));
}
else {
r = (-r+(coord.X));
if(r<(0x00)) {
coord.X = (++r+((*argp).csbi.srWindow.Right));
DEC(coord.Y);
}
else {
coord.X = (r);
}}}}

else {
// It is not a tab i.e., (!0x09).
/* This is a mal-(or dys-)function..
r = _putch(BS);
if(!(r^(EOF))) {
printf("%s", "<< Error at fn. _putch/_putwch()");
return(0x00);
}
//*/

if(coord.X) {
DEC(coord.X);
}

else {
if(!(coord.Y^((*argp).depart.Y))) {
}
else {
coord.X = ((*argp).csbi.srWindow.Right);
DEC(coord.Y);
}}}}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
