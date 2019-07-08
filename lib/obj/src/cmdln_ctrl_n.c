/* **** Notes

Press <Ctrl-N> to invoke the function.

Down

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_n(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);
extern signed(command_mode);
extern signed(cmd_io_terminate);

auto COORD(coord);

auto KNOT(*t);
auto signed(cache), (i), (r);

// Aux. 1/3
// auto signed short(flag);

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

// Aux. 2/3
// flag = ((*argp).csbi.srWindow.Bottom);
// if(!(coord.Y^(flag))) flag = (0x01);
// else flag = (0x00);

// r = ct_txt(ALIGN_TAB,(*((*argp).t)).p);

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

t = ((*argp).t);

r = descend2ll(argp);

if(!r) printf("%s", "<< Error at fn. descend2ll()");

if(!((signed long long) t^((signed long long) (*argp).t))) {
r = cmdln_ctrl_e(argp);
if(!r) {
printf("%s", "<< Error at fn. cmdln_ctrl_e()");
return(0x00);
}
return(0x01);
}

INC((*argp).nknot);

coord.X = (0x00);
coord.Y = ((*argp).depart.Y);
// refer at fn. descend2ll

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}


// Refer at fn. cmdln_ctrl_d, fn. vu_gate_internal or..

// Aux. 3/3
// if(flag) {

// Use the function as a substitute for fn. sync_coordinates(argp); to save resources
r = rsync_coordinates((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. sync_coordinates()");
return(0x00);
}
r = c_outll_partially(argp);
if(!r) {
printf("%s", "<< Error at fn. c_outll_partially()");
return(0x00);
}

// }


return(0x01);
}
