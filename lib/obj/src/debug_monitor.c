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
coord_mon.Y = (-13+((*argp).csbi.srWindow.Bottom));

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

printf("%s%3d%s%3d", "coord.X/Y: ", coord.X, "/", coord.Y);
printf("%s%3d%s%3d", ", (*argp).count/tail: ", (*argp).count, "/", (*argp).tail);
printf("%s%3d%s%3d", ", (*argp).depart.X/Y: ", (*argp).depart.X, "/", (*argp).depart.Y);
printf("%s%d%s", ", (*argp).refresh_rows: ", (*argp).refresh_rows, " times");
printf("\n");

printf("%s%3d", "(*argp).c: ", (*argp).c);
printf("%s%4Xh", ", *((*argp).p): ", *((*argp).p));
printf("%s%4d", ", (*argp).length_with_ht: ", (*argp).length_with_ht);
// by fn. ct_txt()
printf("%s%4d", ", (*argp).recurred: ", (*argp).recurred);
// by fn. vu_internal
printf("\n");

// (*argp).cmd_io.*
printf("%s%ph", "(*argp).cmd_io.caret: ", (*argp).cmd_io.caret);
printf("%s%4Xh", ", *((*argp).cmd_io.caret): ", *((*argp).cmd_io.caret));
printf("%s%3d", ", (*argp).cmd_io.c: ", (*argp).cmd_io.c);
printf("\n");
// also
printf("%s%ph", "(*argp).cmd_io.p    : ", (*argp).cmd_io.p);
printf("%s%4d", ", (*argp).cmd_io.recurred: ", (*argp).cmd_io.recurred);
// by fn. cmd_io_internal
printf("\n");

printf("%s%4d", "(*argp).char_output: ", (*argp).char_output);
// by fn. c_out
printf("%s%4d", ", .copied: ", (*argp).copied);
printf("%s%4d", ", .embedded: ", (*argp).embedded);
printf("%s%4d", ", .repeat: ", (*argp).repeat);
// by fn. cmdln_ctrl_k
printf("%s%ph%s%ph%s%ph", ", (*argp).t/l/b: ", (*argp).t, "/", (*argp).l, "/", (*argp).b);
printf("\n");

/* cli histories */
printf("%s%ph%s%ph%s%ph\n", "(*argp).clih.t/l/b       : ", (*argp).clih.t, "/", (*argp).clih.l, "/", (*argp).clih.b);

if((*argp).t) {
printf("%s%ph%s%ph%s%ph\n", "(*((*argp).t)).clih.t/l/b: ", (*((*argp).t)).clih.t, "/", (*((*argp).t)).clih.l, "/", (*((*argp).t)).clih.b);
}
else {
printf("\n");
}

if(more_debugging) {
printf("%s%8ph%s%-50s\n", "(*argp).init_p: ", (*argp).init_p, " : ", (*argp).init_p);
printf("%s%8ph%s%-50s\n", "(*argp).craft : ", (*argp).craft, " : ", (*argp).craft);
printf("%s%8ph%s%-50s\n", "(*argp).p     : ", (*argp).p, " : ", (*argp).p);
if((*argp).filename) printf("%s%s",   "(*argp).filename: ", (*argp).filename);
}

else {
printf("%s%8ph\n", "(*argp).init_p: ", (*argp).init_p);
printf("%s%8ph\n", "(*argp).craft : ", (*argp).craft);
printf("%s%8ph\n",   "(*argp).p     : ", (*argp).p);
printf("%s%8ph",   "(*argp).filename: ", (*argp).filename);
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
