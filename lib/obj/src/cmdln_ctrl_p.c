/* **** Notes

Press <Ctrl-P> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_p(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto signed(cache), (r);

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

r = ct((*argp).clip);
if(!r) return(0x01);

cache = ((*argp).count);

if(!(cache^((*argp).tail))) {
r = append2((*argp).p, (*argp).clip);
if(!r) {
// It is empty ..or has occurred an error.
}
else {
ADD((*argp).count, r);
ADD((*argp).p, r);
ADD((*argp).tail, r);
}
// External Part.
r = _cputs((*argp).clip);
if(r) printf("%s", "<< Error at fn. _cputs()/_cputws()");
}

else {
r = cpy((*argp).craft, (*argp).p);
r = cpy((*argp).p, (*argp).clip);
ADD((*argp).count, r);
ADD((*argp).p, r);
ADD((*argp).tail, r);
// External Part.
r = _cputs((*argp).clip);
if(r) printf("%s", "<< Error at fn. _cputs()/_cputws()");
else {
r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}}
r = append2((*argp).p, (*argp).craft);
// External Part.
r = _cputs((*argp).craft);
if(r) printf("%s", "<< Error at fn. _cputs()/_cputws()");
// Set the caret.
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");

return(0x01);
}
