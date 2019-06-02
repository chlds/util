/* **** Notes

Press <Ctrl-G> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_g(CMDLN_STAT(*argp))) {

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

cache = ((*argp).count);

if(!(cache^((*argp).tail))) {
XOR(flag,flag);
}

else {
XNOR(flag);

if(!(HT^(*((*argp).p)))) {
// External Part.
r = (coord.X);
r = (r%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
ADD(coord.X,r);
// Internal Part.
((*argp).count)++;
((*argp).p)++;
r = ct_ws((*argp).p);
// External Part.
ADD(coord.X,r);
// Internal Part.
ADD((*argp).count, r);
ADD((*argp).p, r);
}

else {
// Internal Part.
r = ct2thelast((*argp).p);
ADD((*argp).count, r);
ADD((*argp).p, r);
// External Part.
ADD(coord.X,r);
// Internal Part.
r = ct_ws((*argp).p);
ADD((*argp).count, r);
ADD((*argp).p, r);
// External Part.
ADD(coord.X,r);
}}

// Coordinates

if(coord.X<(0x01+((*argp).csbi.srWindow.Right))) {
}

else {
while(0x01) {
INC(coord.Y);
r = (0x01+((*argp).csbi.srWindow.Right));
coord.X = (-r+(coord.X));
if(coord.X<(0x01+((*argp).csbi.srWindow.Right))) break;
}}




/*
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
INC(coord.Y);
XOR(coord.X, coord.X);
}
else {
INC(coord.X);
}}
//*/




if(flag) {
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

return(0x01);
}
