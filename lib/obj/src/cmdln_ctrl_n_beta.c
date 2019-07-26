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

signed(__cdecl cmdln_ctrl_n_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);
extern signed(command_mode);
extern signed(cmd_io_terminate);

auto COORD(coord), (coord_b);

auto KNOT(*t);
auto signed(cache), (i), (r);

// Aux. 1/3
auto signed short(flag);

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
flag = ((*argp).csbi.srWindow.Bottom);
if(!(coord.Y^(flag))) flag = (0x01);
else flag = (0x00);

r = ct_txt(ALIGN_TAB,(*((*argp).t)).p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. ct_txt()");
//*/

XOR(i,i);
cache = (0x01+((*argp).csbi.srWindow.Right));

while(0x01) {
INC(i);
r = (-cache+(r));
if(r<(0x01)) break;
}

i = (i+((*argp).depart.Y));

if(!flag) {
if((*argp).csbi.srWindow.Bottom<(i)) XNOR(flag);
}

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

if(flag) {
/* overwrite the coordinates */
(*((*argp).t)).depart.X = (0x00);
(*((*argp).t)).depart.Y = (i);
// and
(*argp).depart.X = ((*((*argp).t)).depart.X);
(*argp).depart.Y = ((*((*argp).t)).depart.Y);
}

coord_b.X = (0x00);
coord_b.Y = ((*argp).depart.Y);
// refer at fn. descend2ll

r = SetConsoleCursorPosition((*argp).s_out, coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
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


// Refer at fn. cmdln_ctrl_d, fn. vu_gate_internal or..

// Aux. 3/3
if(flag) {
r = clearblock((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. clearblock()");
return(0x00);
}
// output one line only.
r = qput((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. qput()");
return(0x00);
}
/* update the workspace parameters */
r = connect_with_workspace((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. connect_with_workspace()");
return(0x00);
}
coord_b.X = (0x00);
coord_b.Y = ((*argp).csbi.srWindow.Top);
r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}


return(0x01);
}
