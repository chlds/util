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

# define BUFF (0x600)

signed(__cdecl cmdln_ctrl_i(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(ALIGN_TAB) = (0x08);
// auto signed char const(TAB) = (0x09);

auto signed char(craft[BUFF]) = {
(signed char) (0x00)
};

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

// Internal Part.
cache = ((*argp).count);

if(!(cache^((*argp).tail))) {
*((*argp).p) = ('\t');
// *((*argp).p) = (0x09);
INC((*argp).p);
INC((*argp).count);
INC((*argp).tail);
*((*argp).p) = ('\0');
}

else {
r = cpy(craft, (*argp).p);
if(!r) {
printf("%s", "<< Error at. fn. cpy()");
return(0x00);
}
else {
*((*argp).p) = ('\t');
// *((*argp).p) = (0x09);
INC((*argp).p);
INC((*argp).count);
INC((*argp).tail);
*((*argp).p) = ('\0');
r = cpy((*argp).p, craft);
if(!r) {
printf("%s\n", "<< Error at. fn. cpy()");
return(0x00);
}
else {
// printf("%s%d%s", "<< Copied ", r, " letters.");
}
flag++;
}}


// External Part.
/*
cache = (cache%(ALIGN_TAB));
cache = (-cache+(ALIGN_TAB));
//*/

r = _putch('\t');

if(!(r^(EOF))) {
printf("<< Error at fn. _putch/_putwch()");
return(0x00);
}

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

if(flag) {
r = _cputs(craft);
if(r) {
if(!(errno^(EINVAL))) {
}
else {
printf("%s%d", "<< Error at fn. _cputs/_cputws() with errno ", errno);
return(0x00);
}}}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

// printf("%s\n", "Ctrl-I;");

return(0x01);
}
