/* **** Notes

Press <Ctrl-U> to invoke the function.

Up

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_u(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);
extern signed(command_mode);
extern signed(cmd_io_terminate);

auto COORD(coord);

auto KNOT(*t);
auto signed(cache), (i), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = sustain(argp);

if(!r) {
// It is empty ..or has occurred an error.
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

t = ((*argp).t);

r = ascend2ll(argp);

if(!r) printf("%s", "<< Error at fn. ascend2ll()");

if(!((signed long long) t^((signed long long) (*argp).t))) {
(*argp).count = (0x00);
coord.X = (0x00);
coord.Y = ((*argp).depart.Y);
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
}
return(0x01);
}

DEC((*argp).nknot);

/* External Part. */
r = ct_txt(ALIGN_TAB,(*((*argp).t)).p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. ct_txt()");
//*/

/*
XOR(i,i);
cache = (0x01+((*argp).csbi.srWindow.Right));

while(0x01) {
INC(i);
r = (-cache+(r));
if(r<(0x01)) break;
}
//*/

coord.X = (0x00);
coord.Y = ((*argp).depart.Y);
// refer at fn. ascend2ll

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
