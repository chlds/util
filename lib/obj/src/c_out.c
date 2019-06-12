/* **** Notes

Console output

Output one character.

Output a tab as whitespace

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_out(signed char(*di), CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(ALIGN_TAB) = (0x08);
auto signed char const(HT) = (0x09);

auto COORD(coord_virt);
auto COORD(coord);
auto signed(cache), (i), (r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!di) return(0x00);
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

// To output
if(!(HT^(*di))) {

// 1. Linear
XOR(coord_virt.Y,coord_virt.Y);
XOR(coord_virt.X,coord_virt.X);
OR(coord_virt.Y,coord.Y);
OR(coord_virt.X,coord.X);

while(0x01) {
if(coord_virt.Y<((*argp).depart.Y)) return(0x00);
if(!(coord_virt.Y^((*argp).depart.Y))) break;
DEC(coord_virt.Y);
ADD(coord_virt.X,0x01+((*argp).csbi.srWindow.Right));
}

// 2. Alignement
r = (coord_virt.X);
r = (r%(ALIGN_TAB));
cache = (-r+(ALIGN_TAB));
i = (cache);

// 3. Coordinates
r = c_out_ht(cache, argp);
if(!r) {
printf("%s", "<< Error at fn. c_out_ht()");
return(0x00);
}}

else {
if(!(coord.X^((*argp).csbi.srWindow.Right))) {
INC(coord.Y);
XOR(coord.X,coord.X);
// Output
r = _putch(*di);
if(!(r^(EOF))) printf("%s", "<< Error at fn. _putch()/_putwch()");
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}
else {
r = _putch(*di);
if(!(r^(EOF))) printf("%s", "<< Error at fn. _putch()/_putwch()");
}
i = (0x01);
}

if(debugging) (*argp).char_output = (i);

return(0x01);
}
