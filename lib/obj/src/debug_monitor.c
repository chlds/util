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
coord_mon.Y = (-16+((*argp).csbi.srWindow.Bottom));

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

printf("%s%3d%s%3d", "(*argp).count/tail: ", (*argp).count, "/", (*argp).tail);
printf("%s%3d%s%3d", ", coord.X/Y: ", coord.X, "/", coord.Y);

/* The two Coordinate sets are important.
i.e., (*argp).depart.X/Y on the workspace
and (*((*argp).t)).depart.X/Y on the current knot associated with the workspace
*/
printf("%s%3d%s%3d", ", (*argp).depart.X/Y: ", (*argp).depart.X, "/", (*argp).depart.Y);
printf("%s%4d%s%4d", ", (*((*argp).t)).depart.X/Y: ", (*((*argp).t)).depart.X, "/", (*((*argp).t)).depart.Y);
printf("\n");

printf("%s%3d", "(*argp).c: ", (*argp).c);
printf("%s%4Xh", ", *((*argp).p): ", *((*argp).p));
printf("%s%4d", ", .length_with_ht: ", (*argp).length_with_ht);
// by fn. ct_txt()
printf("%s%4d", ", .recurred: ", (*argp).recurred);
// by fn. vu_internal
printf("%s%4d", ", .cleared_rows: ", (*argp).cleared_rows);
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
printf("%s%4d", ", (*argp).cmd_io.args: ", (*argp).cmd_io.args);
// by fn. cmdln_ctrl_c
printf("\n");

printf("%s%4d", "(*argp).char_output: ", (*argp).char_output);
// by fn. c_out
printf("%s%4d", ", .copied: ", (*argp).copied);
printf("%s%4d", ", .embedded: ", (*argp).embedded);
printf("%s%4d", ", .repeat: ", (*argp).repeat);
// by fn. cmdln_ctrl_k
printf("%s%d%s", ", .refresh_rows: ", (*argp).refresh_rows, " times");
printf("%s%2d%s%2d", ", .orig.X/Y: ", (*argp).orig.X, "/", (*argp).orig.Y);
printf("\n");

/* The three (i.e., temporary, lead and base) knots for the delegate list - argp - in the CMDLN_STAT structure */
printf("%s%ph%s%ph%s%ph\n", "(*argp).t/l/b            : ", (*argp).t, "/", (*argp).l, "/", (*argp).b);

/* cli histories associated with the delegate list - argp - in the CMDLN_STAT structure */
printf("%s%ph%s%ph%s%ph\n", "(*argp).clih.t/l/b       : ", (*argp).clih.t, "/", (*argp).clih.l, "/", (*argp).clih.b);

/* a temporary (i.e., current) knot associated with the delegate list - argp - in the CMDLN_STAT structure */
if((*argp).t) {
printf("%s%ph%s%ph%s%ph\n", "(*((*argp).t)).clih.t/l/b: ", (*((*argp).t)).clih.t, "/", (*((*argp).t)).clih.l, "/", (*((*argp).t)).clih.b);
if((*((*argp).t)).clih.t) printf("%s%4d\n", "(*((*((*argp).t)).clih.t)).offset: ", (*((*((*argp).t)).clih.t)).offset);
else printf("\n");
}
else {
printf("\n");
printf("\n");
}

if(DBG_B<(C_DBG)) {
if((*((*argp).t)).p) printf("%s%8ph%s%-56s\n", "(*((*argp).t)).p: ", (*((*argp).t)).p, " : ", (*((*argp).t)).p);
else printf("\n");
printf("%s%8ph%s%-56s\n", "(*argp).init_p  : ", (*argp).init_p, " : ", (*argp).init_p);
printf("%s%8ph%s%-56s\n", "(*argp).craft   : ", (*argp).craft, " : ", (*argp).craft);
printf("%s%8ph%s%-56s\n", "(*argp).p       : ", (*argp).p, " : ", (*argp).p);
if((*argp).filename) printf("%s%s",   "(*argp).filename: ", (*argp).filename);
}

else {
printf("%s%8ph\n", "(*argp).init_p: ", (*argp).init_p);
printf("%s%8ph\n", "(*argp).craft : ", (*argp).craft);
printf("%s%8ph\n", "(*argp).p     : ", (*argp).p);
printf("%s%8ph",   "(*argp).filename: ", (*argp).filename);
}

/* at a two-row footer (for command mode) */
printf("\n");

printf("%s%4d", "(*argp).nknot: ", (*argp).nknot);
printf("%s%4d", ", (*argp).unmapped_ss: ", (*argp).unmapped_ss);
printf("%s%4d", ", (*argp).q_refresh: ", (*argp).q_refresh);
printf("\n");

/* Go back */
r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
