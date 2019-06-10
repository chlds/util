/* **** Notes

To undo and re-do

Press <Ctrl-V> to invoke the function.

Use the fn. in fn. cmdln_ctrl_w_prep(), e.g., in fn. cmdln_ctrl_d_prep(), in fn. cmdln_ctrl_k_prep() or..

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
Refer at incl/ll.h for the CLI_HISTORY structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_history(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cch);

auto COORD(coord);
auto signed(cache), (r);
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

/* Refer at fn. vu_gate().
(*argp).clih.l = (KNOT*) (0x00);
(*argp).clih.b = (KNOT*) (0x00);
//*/

cch = (KNOT*) malloc(0x01*(sizeof(KNOT)));

if(!cch) {
printf("%s\n", "<< Error at fn. malloc()");
return(0x00);
}

r = concat2ll(cch,&((*argp).clih.l),&((*argp).clih.b));

if(!r) {
printf("%s\n", "<< Error at fn. concat2ll()");
return(0x00);
}

r = ct((*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) {
printf("%s\n", "<< Error at fn. ct()");
return(0x00);
}
//*/

INC(r);

(*cch).p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!((*cch).p)) {
printf("%s\n", "<< Error at fn. malloc() the second");
return(0x00);
}

r = cpy((*cch).p,(*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) {
printf("%s\n", "<< Error at fn. cpy()");
return(0x00);
}
//*/

/* Snapshot the status before changing */
(*cch).ss_count = ((*argp).count);
(*cch).ss_tail = ((*argp).tail);
(*cch).ss_p = ((*argp).p);
(*cch).ss_caret_pos_x = (coord.X);
(*cch).ss_caret_pos_y = (coord.Y);

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
