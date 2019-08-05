/* **** Notes

Crawl out

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

# define ROWS (0x400)

signed(__cdecl cmd_mode_crawlout(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
static signed char(rows[ROWS]) = ("");

auto COORD(coord), (coord_b);
auto signed(cache), (i), (r);
auto signed(c);
auto signed short(flag);

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

/*
coord_b.X = (0x00);
coord_b.Y = (-0x01+((*argp).csbi.srWindow.Bottom));

r = SetConsoleCursorPosition((*argp).s_out, coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

coord_b.X = (0x00);
coord_b.Y = (-0x01+((*argp).csbi.srWindow.Bottom));
r = (0x02*(0x01+((*argp).csbi.srWindow.Right)));

r = WriteConsoleOutputCharacter((*argp).s_out,(*argp).crawl,r,coord_b,&i);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. WriteConsoleOutputCharacter() with error no. ", r);
return(0x00);
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
