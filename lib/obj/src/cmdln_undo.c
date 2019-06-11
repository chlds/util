/* **** Notes

Press <Ctrl-[> to invoke the function.

Undo.

argp: Put the leading address of the <knot> structure at.

Remarks:
Please look at util/incl/ll.h
Refer at fn. cmdln_ctrl_lbracket() for the hist flag.
//*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_undo(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto struct knot(*cch);
auto signed(cache), (r);

/* **** CODE/TEXT */
if(!argp) return(NIL);

if(!((*argp).hist)) {
}

else {
r = cpy((*argp).init_p,(*((*argp).clih.b)).ss_p);
if(!r) printf("%s", "<< Error at fn. cpy()");
cache = ((*argp).tail);
}

// The fist
coord.X = (0x00);
coord.Y = ((*argp).depart.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

/* Delete by overwriting */
while(cache) {
r = _putch(' ');
DEC(cache);
}

// The second
coord.X = (0x00);
coord.Y = ((*argp).depart.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

// Overwrite
r = _cputs((*argp).init_p);
if(r) printf("%s", "<< Error at fn. _cputs/_cputws()");

// The third
(*argp).count = ((*((*argp).clih.b)).ss_count);
(*argp).tail = ((*((*argp).clih.b)).ss_tail);
coord.X = ((*((*argp).clih.b)).ss_caret_pos_x);
coord.Y = ((*((*argp).clih.b)).ss_caret_pos_y);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(r);
}
