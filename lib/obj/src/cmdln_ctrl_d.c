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

signed(__cdecl cmdln_ctrl_d(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(HT) = (0x09);

auto signed char(*p);

auto COORD(coord);
auto signed(i), (r);
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
while(0x01) {
DEC(coord.Y);
// and sync. the coordinates with the workspace and the current knot associated with the one, refer at fn. delete_knot
DEC((*argp).depart.Y);
DEC((*((*argp).t)).depart.Y);
r = (-i+(r));
if(r<(0x01)) break;
}}
// re-initialise
(*argp).lead_back = (signed short) (0x00);

// Check for the workspace
r = ct((*argp).init_p);
(*argp).tail = (r);

r = refresh_screen((*argp).b,argp);
if(!r) {
printf("%s", "<< Error at fn. refresh_screen()");
return(0x00);
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

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
if(debugging) r = _putch('*');
else r = _putch(' ');
if(!(r^(EOF))) printf("%s", "<< Error at fn. _putch/_putwch()");
DEC(i);
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

// printf("%s", "Ctrl-D;");

return(0x01);
}
