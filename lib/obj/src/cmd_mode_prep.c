/* **** Notes

Set the caret coordinates for command mode features

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmd_mode_prep(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto signed(cache), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.srWindow.Left);
coord.Y = (-1+((*argp).csbi.srWindow.Bottom));
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

cache = (0x01+((*argp).csbi.srWindow.Right));
while(cache) {
r = _putch('*');
DEC(cache);
}

cache = (0x00+((*argp).csbi.srWindow.Right));
while(cache) {
r = _putch(' ');
DEC(cache);
}

coord.X = ((*argp).csbi.srWindow.Left);
coord.Y = ((*argp).csbi.srWindow.Bottom);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
