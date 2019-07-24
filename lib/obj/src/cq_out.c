/* **** Notes

Quickly output character lines out of the argument

Remarks:
Based on fn. c_out.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cq_out(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord), (coord_b);
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);
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

coord_b.X = (0x00);
coord_b.Y = ((*argp).orig.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

r = clearbelow(argp);

if(!r) {
printf("%s", "<< Error at fn. clearbelow()");
return(0x00);
}

/* quickly output */
r = ((*argp).csbi.srWindow.Bottom);

r = cq_out_internal(r,k,argp);

if(!r) {
printf("%s", "<< Error at fn. cq_out_internal()");
return(0x00);
}

/* connect with the workspace */
r = connect_with_workspace((*argp).t,argp);

if(!r) {
printf("%s", "<< Error at fn. connect_with_workspace()");
return(0x00);
}

/* go to the header
coord_b.X = (0x00);
coord_b.Y = (0x00);
r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

/* come back */
coord_b.X = (0x00);
coord_b.Y = ((*argp).orig.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
