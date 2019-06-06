/* **** Notes

Console output

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

signed(__cdecl c_out_ht(signed(di), CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(ALIGN_TAB) = (0x08);
auto signed char const(HT) = (0x09);

auto COORD(coord_virt);
auto COORD(coord);
auto signed(cache), (i), (r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(di<(0x00)) return(0x00);
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

// Coordinates
if(!(coord.X^((*argp).csbi.srWindow.Right))) {
INC(coord.Y);
XOR(coord.X,coord.X);
r = _putch(' ');
if(!(r^(EOF))) printf("%s", "<< Error at fn. _putch()/_putwch()");
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

else {
r = _putch(' ');
if(!(r^(EOF))) printf("%s", "<< Error at fn. _putch()/_putwch()");
}

DEC(di);

return(0x01+(c_out_ht(di,argp)));
}
