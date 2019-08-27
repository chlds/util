/* **** Notes

Console output
Based on fn. c_out

Output one character.
Output a tab as whitespace

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure

Output a character or whitespace.
New: fn. c_out_beta + c_out_ht_beta (based on fn. c_out) + c_out_ht_beta_internal (based on fn. c_out_ht);
Old: fn. c_out + c_out_ht;
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_out_ht_beta(signed char(*di),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto char const(HT) = (0x09);

auto COORD(coord_b);
auto COORD(coord);
auto signed(len);
auto signed(r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!argp) return(0x00);

if(!(*di)) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);

coord_b.X = (coord.X);
coord_b.Y = (coord.Y);

if(!(HT^(*di))) {
// 1. Linear
while(0x01) {
if(coord_b.Y<((*argp).depart.Y)) {
printf("%s", "<< Error at fn. c_out()");
return(0x00);
}
if(!(-coord_b.Y+((*argp).depart.Y))) break;
DEC(coord_b.Y);
ADD(coord_b.X,0x01+((*argp).csbi.srWindow.Right));
}
// 2. Alignement
coord_b.X = (coord_b.X%(ALIGN_TAB));
r = (-coord_b.X+(ALIGN_TAB));
// 3. Coordinates
r = c_out_ht_beta_internal(r,argp);
if(!r) {
printf("%s", "<< Error at fn. c_out_ht_beta_internal()");
return(0x00);
}}

else {
if(!(coord.X^((*argp).csbi.srWindow.Right))) {
INC(coord.Y);
XOR(coord.X,coord.X);
}
else INC(coord.X);
r = WriteConsole((*argp).s_out,di,sizeof(*di),&len,0x00);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. WriteConsole() with error no. ", r);
return(0x00);
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
r = (0x01);
}

if(C_DBG) (*argp).char_output = (r);

return(r);
}
