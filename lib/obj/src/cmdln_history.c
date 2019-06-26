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
auto signed char(*p);
auto COORD(coord);
auto SNAPSHOT(*cache);
auto signed(i), (r);
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
(*argp).clih.l = (SNAPSHOT*) (0x00);
(*argp).clih.b = (SNAPSHOT*) (0x00);
//*/

cache = (SNAPSHOT*) malloc(0x01*(sizeof(SNAPSHOT)));

if(!cache) {
printf("%s\n", "<< Error at fn. malloc()");
return(0x00);
}

// initialise parameters
(*cache).p = (signed char(*)) (0x00);
(*cache).offset = (signed) (0x00);

r = concat2ll_for_history(cache,&((*argp).clih.l),&((*argp).clih.b));

if(!r) {
printf("%s\n", "<< Error at fn. concat2ll_for_history()");
return(0x00);
}

(*argp).clih.t = ((*argp).clih.l);

r = ct((*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s\n", "<< Error at fn. ct()");
//*/

INC(r);
(*cache).p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!((*cache).p)) {
printf("%s\n", "<< Error at fn. malloc() the second");
return(0x00);
}

r = cpy((*cache).p,(*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. cpy()");
//*/

/* distance measured from depart.X of the knot for a snapshot */
r = cpy((*argp).craft,(*argp).init_p);
r = ((*argp).count);
*(r+((*argp).craft)) = (signed char) ('\0');
r = ct_txt(ALIGN_TAB,(*argp).craft);
(*cache).offset = (r);

/* Registre to the current knot (out of the delegate list - argp - in the CMDLN_STAT structure) */
(*((*argp).t)).clih.t = ((*argp).clih.t);
(*((*argp).t)).clih.l = ((*argp).clih.l);
(*((*argp).t)).clih.b = ((*argp).clih.b);

/*
r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

return(0x01);
}
