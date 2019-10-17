/* **** Notes

Console output

Output one character.
Output a tab as whitespace

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
Use fn. c_out_beta
along with fn. c_out_ht_beta (based on fn. c_out) and fn. c_out_ht_beta_internal (based on fn. c_out_ht).
Check the ((*argp).cols) to wrap words.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_out_beta(signed char(*di),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto char const(HYPHEN) = ('-');
auto char const(WS) = (0x20);
auto char const(HT) = (0x09);

auto signed char(*p) = (" ");
auto COORD(coord_b);
auto COORD(coord);
auto signed(len);
auto signed i,l,r;
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!di) return(0x00);
if(!(*di)) return(0x00);

(*argp).deadsp_by_wrapping = (0x00);
(*argp).wrap = (0x00);

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
if(!(HYPHEN^(*di))) XNOR(flag);

if(flag) {
r = c_out_ht_beta(di,argp);
if(!r) {
printf("%s", "<< Error at fn. c_out_ht_beta()");
return(0x00);
}}


else {

if(!(coord.X^((*argp).csbi.srWindow.Right))) {
r = (0x01+((*argp).csbi.srWindow.Right));
XOR(i,i);
while(r) {
if(!(-'-'+(*(i+(di))))) break;
if(!(-' '+(*(i+(di))))) break;
if(!(-'\t'+(*(i+(di))))) break;
DEC(i);
DEC(r);
}
if(r) {
// store dead sp after wrapping words on the workspace
(*argp).deadsp_by_wrapping = (i);
(*argp).wrap = (0x01);
if(!((*argp).cumul_lock)) ADD((*argp).cumul,i);
// e.g., refer at fn. ctrl_b_beta, fn. sustain, fn. connect_with_workspace, incl/ll.h, incl/cmdln.h or..
l = (~i);
coord_b.X = (-l+(coord_b.X));
r = SetConsoleCursorPosition((*argp).s_out,coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
XNOR(flag);
XOR(coord_b.X,coord_b.X);
INC(coord_b.Y);
i = (l);
++i;
while(i) {
// Sleep(500);
DEC(i);
r = WriteConsole((*argp).s_out,p,sizeof(signed char),&len,0x00);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. WriteConsole() with error no. ", r);
return(0x00);
}}
r = SetConsoleCursorPosition((*argp).s_out,coord_b);
if(!r) {
r = GetLastError();
printf("%s%d", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
l = (0x01+(~l));
(*argp).p_set_after_wrapping = (l+(di)); // Deprecated..
(*argp).offset = (l+(di));
while(0x01) {
if(0x00<(l)) break;
r = WriteConsole((*argp).s_out,l+(di),sizeof(signed char),&len,0x00);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. WriteConsole() with error no. ", r);
return(0x00);
}
INC(l);
}}
else {
r = WriteConsole((*argp).s_out,di,sizeof(*di),&len,0x00);
if(!r) {
r = GetLastError();
printf("%s%d", "<< Error at fn. WriteConsole() with error no. ", r);
return(0x00);
}
XOR(coord_b.X,coord_b.X);
INC(coord_b.Y);
r = SetConsoleCursorPosition((*argp).s_out,coord_b);
if(!r) {
r = GetLastError();
printf("%s%d", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}}


else {
r = WriteConsole((*argp).s_out,di,sizeof(*di),&len,0x00);
if(!r) {
r = GetLastError();
printf("%s%d", "<< Error at fn. WriteConsole() with error no. ", r);
return(0x00);
}}


r = (0x01);
}

if(C_DBG) (*argp).char_output = (r);

return(r);
}
