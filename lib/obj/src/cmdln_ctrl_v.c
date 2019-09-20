/* **** Notes

Press <Ctrl-V> to invoke the function.

View in reading.


UN-COMPLETED


Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_v(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(*p);

auto COORD(coord), (coord_b);
auto signed(cache), (i), (r);
auto signed short(flag);
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


r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

r = sustain(argp);

r = vu_refresh((*argp).t,argp);

if(!r) {
printf("%s", "<< Error at fn. vu_refresh()");
return(0x00);
}

return(0x01);
}
