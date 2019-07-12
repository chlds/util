/* **** Notes

Display the two-row header.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl display_header(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(*(day_of_the_week[])) = {
(signed char(*)) "SUNDAY",
(signed char(*)) "MONDAY",
(signed char(*)) "TUESDAY",
(signed char(*)) "WEDNESDAY",
(signed char(*)) "THURSDAY",
(signed char(*)) "FRIDAY",
(signed char(*)) "SATURDAY",
(signed char(*)) (0x00)
};

auto signed char const(*(mon[])) = {
(signed char(*)) "JANUARY",
(signed char(*)) "FEBRUARY",
(signed char(*)) "MARCH",
(signed char(*)) "APRIL",
(signed char(*)) "MAY",
(signed char(*)) "JUNE",
(signed char(*)) "JULY",
(signed char(*)) "AUGUST",
(signed char(*)) "SEPTEMBER",
(signed char(*)) "OCTOBER",
(signed char(*)) "NOVEMBER",
(signed char(*)) "DECEMBER",
(signed char(*)) (0x00)
};

auto COORD(coord);

auto struct tm(*tp);
auto time_t(t);

auto signed(cache), (r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

/*
r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}
//*/

/* The Header Lines */
printf("%s", "Ctrl-Q to quit | ");

/* File name
if(!((*argp).filename)) printf("%s", "No file name");
else printf("%s", (*argp).filename);
//*/

// Calendar
XOR(flag,flag);

t = time(&t);

if(!(t^(~(0x00)))) {
printf("%s", "<< Error at fn. time()");
XNOR(flag);
// return(0x00);
}

tp = localtime(&t);

if(!tp) {
printf("%s", "<< Error at fn. localtime()");
XNOR(flag);
// return(0x00);
}

if(!flag) printf("%s %d %s %d", *(day_of_the_week+((*tp).tm_wday)), (*tp).tm_mday, *(mon+((*tp).tm_mon)), 1900+((*tp).tm_year));
printf("\n");

printf("\n");

/*
r = SetConsoleCursorPosition((*argp).s_out, (*argp).depart);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

return(0x01);
}
