/* **** Notes

Clear rows on the console screen.

Output as background characters, refer at fn. refresh_screen_at_the_caret_pos.

Remarks:
Along with fn. refresh_screen_at_the_caret_pos
Also refer at fn. refresh_screen
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl clear_rows(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);

auto KNOT(*cache);
auto signed(i), (l), (r);
auto signed char(ws);

/* **** CODE/TEXT */
if(!argp) return(0x00);

// similar to system("cls");

/*
r = display_header(argp);
if(!r) printf("%s", "<< Error at fn. display_header()");
//*/

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

r = ((*argp).csbi.srWindow.Bottom);
if(coord.Y<(r)) {
r = (-coord.Y+(r));
r = (-0x01+(r*(0x01+((*argp).csbi.srWindow.Right))));
}
else {
if(!(coord.Y^(r))) r = ((*argp).csbi.srWindow.Right);
else return(0x01);
}

ws = (signed char) (' ');
l = (r);
i = (r);
while(i) {
r = c_out(&ws,argp);
DEC(i);
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(l);
}
