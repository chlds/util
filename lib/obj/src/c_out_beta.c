/* **** Notes

Console output

Output one character.
Output a tab as whitespace

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure

Use fn. c_out_beta
along with fn. c_out_ht_beta (based on fn. c_out) and fn. c_out_ht_beta_internal (based on fn. c_out_ht).
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_out_beta(signed char(*di),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto char const(WS) = (0x20);
auto char const(HT) = (0x09);

auto COORD(coord_b);
auto COORD(coord);
auto signed(len);
auto signed(r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!di) return(0x00);
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

XOR(flag,flag);

if(!(HT^(*di))) XNOR(flag);
if(!(WS^(*di))) XNOR(flag);

if(flag) {
r = c_out_ht_beta(di,argp);
if(!r) {
printf("%s", "<< Error at fn. c_out_ht_beta()");
return(0x00);
}}


else {

if(!(coord.X^((*argp).csbi.srWindow.Right))) {
if(!(' '^(*(-0x01+((*argp).p))))) XNOR(flag);
else flag = (0x01);
}

if(coord.X<(-0x10+((*argp).csbi.srWindow.Right))) {
}
else {
if(!(' '^(*(-0x01+((*argp).p))))) XNOR(flag);
}

if(flag) {
INC(coord.Y);
XOR(coord.X,coord.X);
}

if(!(-0x01^(flag))) {
r = SetConsoleCursorPosition((*argp).s_out,coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

r = WriteConsole((*argp).s_out,di,sizeof(*di),&len,0x00);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. WriteConsole() with error no. ", r);
return(0x00);
}

if(!(0x01^(flag))) {
r = SetConsoleCursorPosition((*argp).s_out,coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

else {
INC(coord.X);
r = SetConsoleCursorPosition((*argp).s_out,coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

r = (0x01);
}

if(C_DBG) (*argp).char_output = (r);

return(r);
}
