/* **** Notes

Press <Ctrl-A> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

# define more_debugging (0x00)

signed(__cdecl debug_monitor(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord), (coord_mon);
auto signed(cache), (r);
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

/* to debug monitor */
coord_mon.X = ((*argp).csbi.srWindow.Left);
coord_mon.Y = (-5+((*argp).csbi.srWindow.Bottom));

r = SetConsoleCursorPosition((*argp).s_out, coord_mon);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

/* Output */
cache = (1+((*argp).csbi.srWindow.Right));

while(cache) {
r = _putch('*');
--cache;
}

printf("%s%3d", "coord.X: ", coord.X);
printf("%s%3d", ", coord.Y: ", coord.Y);

printf("%s%3d", ", (*argp).count: ", (*argp).count);
printf("%s%3d\n", ", .tail: ", (*argp).tail);

printf("%s%8Xh", ".copied: ", (*argp).copied);
printf("%s%8Xh", ", .embedded: ", (*argp).embedded);
printf("%s%8Xh", ", .repeat: ", (*argp).repeat);
printf("%s%8Xh\n", ", .char_output: ", (*argp).char_output);

if(more_debugging) {
printf("%s%8p%s%s\n", "(*argp).init_p: ", (*argp).init_p, " : ", (*argp).init_p);
printf("%s%8p%s%s\n", "(*argp).craft : ", (*argp).craft, " : ", (*argp).craft);
printf("%s%8p%s%s",   "(*argp).p     : ", (*argp).p, " : ", (*argp).p);
}

else {
printf("%s%8p\n", "(*argp).init_p: ", (*argp).init_p);
printf("%s%8p\n", "(*argp).craft : ", (*argp).craft);
printf("%s%8p",   "(*argp).p     : ", (*argp).p);
}

/* Go back */
r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
