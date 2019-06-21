/* **** Notes

Press <Ctrl-S> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_save_prep(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(*label) = ("Cancel (c) or Save as (s): ");

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

/*
r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}
//*/

r = cmd_mode_prep(argp);

if(!r) {
printf("%s", "<< Error at fn. cmd_mode_prep()");
return(0x00);
}

if(!((*argp).filename)) {
r = ct(label);
(*argp).command_label = (r);
printf("%s", label);
r = cmd_io(argp);
if(!r) {
printf("%s\n", "<< Error at fn. cmd_io()");
return(0x00);
}
c = (signed char) (*((*argp).cmd_io.p));
if(!(c^('s'))) {
r = cmdln_save(argp);
if(!r) printf("%s", "<< Error at fn. cmdln_save()");
}
else {
printf("%s", " < Cancelled > ");
Sleep(1500);
}}

else {
r = cmdln_save(argp);
if(!r) printf("%s", "<< Error at fn. cmdln_save()");
}

/*
r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

return(0x01);
}
