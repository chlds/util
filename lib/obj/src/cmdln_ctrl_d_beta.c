/* **** Notes

Press <Ctrl-D> to invoke the function.

Delete a character on the current caret (or delete a row).

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_d_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(HT) = (0x09);

auto signed char(AK) = ('*');
auto signed char(WS) = (' ');

auto signed char(*p);

auto COORD(coord);
auto signed(cache), (i), (l), (r);
auto signed char(c);

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

// Check the numbre to the workspace
r = ct((*argp).init_p);

if(!r) {
/* Delete a row */
// Aux. 1/2: initialise the flag
(*argp).lead_back = (signed short) (0x00);

r = delete_knot((*argp).t,argp);
if(!r) {
// It is empty ..or has occurred an error.
// printf("%s", "<< Error at fn. delete_knot()");
// return(0x00);
}

// Aux. 2/2: To step back the caret pos.
if((*argp).lead_back) {
r = ct_txt(ALIGN_TAB,(*argp).init_p);
i = (0x01+((*argp).csbi.srWindow.Right));
XOR(l,l);
while(0x01) {
INC(l);
r = (-i+(r));
if(r<(0x01)) break;
}
coord.X = (0x00);
if(!coord.Y) {
}
else {
coord.Y = (-l+(coord.Y));
if(coord.Y<(0x00)) coord.Y = (0x00);
}}

// overwrite the coordinates for the current knot and for the workspace.
(*((*argp).t)).depart.X = (coord.X);
(*((*argp).t)).depart.Y = (coord.Y);
(*argp).depart.X = ((*((*argp).t)).depart.X);
(*argp).depart.Y = ((*((*argp).t)).depart.Y);

// Check for the workspace
r = ct((*argp).init_p);
(*argp).tail = (r);

/* No bugs, but not efficient..
r = refresh_screen((*argp).b,argp);
if(!r) {
printf("%s", "<< Error at fn. refresh_screen()");
return(0x00);
}
//*/

// come back
// (*argp).depart.Y = ((*((*argp).t)).depart.Y);
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

//* Being replaced for fn. refresh_screen e.g., refer at fn. cmdln_ctrl_n, fn. vu_gate_internal or..
// i.e., use the two functions as a substitute for fn. refresh_screen (after running fn. SetConsoleCursorPosition).

/*
r = rsync_coordinates((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. rsync_coordinates()");
return(0x00);
}
//*/

r = sync_coordinates(argp);
if(!r) {
printf("%s", "<< Error at fn. sync_coordinates()");
return(0x00);
}

r = c_outll_partially(argp);
if(!r) {
printf("%s", "<< Error at fn. c_outll_partially()");
return(0x00);
}
//*/
}


else {
/* Delete a character */
// Internal Part.
i = ct_txt(ALIGN_TAB, (*argp).init_p);
r = cpy((*argp).craft, 1+((*argp).p));
r = cpy((*argp).p, (*argp).craft);
// Count the numbre to the workspace
r = ct((*argp).init_p);
(*argp).tail = (r);
// External Part.
r = ct_txt(ALIGN_TAB, (*argp).init_p);
i = (-r+(i));
// Output
r = c_outs((*argp).craft,argp);
/* It is empty ..or has an error.
if(!r) {
printf("%s", "<< Error at fn. c_outs()");
return(0x00);
}
//*/
while(i) {
if(C_DBG) r = c_out(&AK,argp);
else r = c_out(&WS,argp);
if(!r) {
printf("%s", "<< Error at fn. c_out()");
return(0x00);
}
DEC(i);
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}


/* Effectively refresh the console screen to save resources */
r = ct_txt(ALIGN_TAB,(*argp).init_p);
r = (r%(0x01+((*argp).csbi.srWindow.Right)));

cache = ((*argp).q_refresh);
(*argp).q_refresh = (r);

if(!r) {
if(!(cache^(r))) {
}
else {
// quickly refresh a part of console screen.
r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");
}}

else {
if(cache<(r)) {
r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");
}
else {
}}


return(0x01);
}
