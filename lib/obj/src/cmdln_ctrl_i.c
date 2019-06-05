/* **** Notes

Press <Ctrl-I> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure

.align  times (1%AL(AL+(-(1%AL($))))) db (0x00)
.indent times      (AL+(-(1%AL($))))  db (0x20)
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_i(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(ALIGN_TAB) = (0x08);
auto signed char const(HT) = (0x09);

auto signed char(*p);

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

XOR(flag, flag);

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

if(!(cache^((*argp).tail))) XOR(flag,flag);

else {
r = cpy((*argp).craft, (*argp).p);
if(!r) {
printf("%s", "<< Error at fn. cpy()");
return(0x00);
}
XNOR(flag);
}

*((*argp).p) = ('\t');
// *((*argp).p) = (0x09);
// *((*argp).p) = ((*argp).c);

// External Part.
r = c_out((*argp).p,argp);

if(!r) {
printf("%s", "<< Error at fn. c_out()");
return(0x00);
}

((*argp).p)++;
((*argp).count)++;
((*argp).tail)++;
*((*argp).p) = ('\0');

if(flag) {
r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

r = cpy((*argp).p,(*argp).craft);

r = c_outs((*argp).p,argp);
if(!r) return(0x00);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

// printf("%s\n", "Ctrl-I;");

return(0x01);
}
