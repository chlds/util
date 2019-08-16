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

signed(__cdecl cmdln_ctrl_u_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);
extern signed(command_mode);
extern signed(cmd_io_terminate);

auto COORD(coord), (coord_b);

auto KNOT(*t);
auto signed(cache), (i), (r);
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

// flag for the clipboard, refer fn. cmdln_ctrl_y, vu_clip or..
XNOR((*argp).clip_reset);

if((*argp).count) {
r = cmdln_ctrl_a(argp);
if(!r) {
printf("%s", "<< Error at fn. cmdln_ctrl_a()");
return(0x00);
}
return(0x01);
}

t = ((*argp).t);

r = ascend2ll(argp);

if(!r) printf("%s", "<< Error at fn. ascend2ll()");

if(!((signed long long) t^((signed long long) (*argp).t))) {
if(!(coord.Y^((*argp).orig.Y))) return(0x01);
coord_b.X = (signed short) (0x00);
coord_b.Y = (signed short) (0x00);
r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
r = qclear(argp);
if(!r) {
printf("%s", "<< Error at fn. qclear()");
return(0x00);
}
r = display_header(argp);
if(!r) {
printf("%s", "<< Error at fn. display_header()");
return(0x00);
}

(*((*argp).t)).depart.X = (0x00);
(*((*argp).t)).depart.Y = ((*argp).orig.Y);
r = connect_with_workspace((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. connect_with_workspace()");
return(0x00);
}

r = cq_outs((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. cq_outs()");
return(0x00);
}

coord_b.X = (signed short) (0x00);
coord_b.Y = (signed short) (0x00);
r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
coord_b.Y = (signed short) ((*argp).orig.Y);
r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
/* Comment out to save resources..
// quickly refresh a part of console screen.
r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");
//*/
return(0x01);
}

DEC((*argp).nknot);

XOR(flag,flag);
if(!(coord.Y^((*argp).csbi.srWindow.Top))) XNOR(flag);

if(flag) {
coord_b.X = (signed short) (0x00);
coord_b.Y = (signed short) (0x00);
r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
r = qclear(argp);
if(!r) {
printf("%s", "<< Error at fn. qclear()");
return(0x00);
}


(*((*argp).t)).depart.X = (0x00);
(*((*argp).t)).depart.Y = (0x00);
r = connect_with_workspace((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. connect_with_workspace()");
return(0x00);
}

r = cq_outs((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. cq_outs()");
return(0x00);
}


return(0x01);
}

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

coord.X = (0x00);
coord.Y = (-i+(coord.Y));
// refer at fn. ascend2ll


/* overwrite the coordinates */
(*((*argp).t)).depart.X = (coord.X);
(*((*argp).t)).depart.Y = (coord.Y);
r = connect_with_workspace((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. connect_with_workspace()");
return(0x00);
}


r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

/* Comment out to save resources..
// quickly refresh a part of console screen.
r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");
//*/

return(0x01);
}
