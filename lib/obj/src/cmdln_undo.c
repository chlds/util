/* **** Notes

Press <Ctrl-[> to invoke the function.

UN-COMPLETED

Undo.

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
auto SNAPSHOT(*cch);
auto COORD(coord);
auto signed(i), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!((*argp).clih.t)) return(0x01);
// (*argp).clih.t ..is alway reset the lead of history by fn. cmdln_history.

cch = ((*argp).clih.t);
(*argp).clih.t = ((*((*argp).clih.t)).s);

r = cpy((*argp).init_p, (*cch).p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. cpy()");
//*/

i = ct_txt(ALIGN_TAB,(*argp).init_p);

// The fist
coord.X = (0x00);
coord.Y = ((*cch).depart.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

/* Delete by overwriting */
while(i) {
r = _putch(' ');
DEC(i);
}

// The second
coord.X = (0x00);
coord.Y = ((*cch).depart.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

// Overwrite
r = c_outs((*argp).init_p,argp);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. c_outs()");
//*/

/* ..or
r = _cputs((*argp).init_p);
if(r) printf("%s", "<< Error at fn. _cputs/_cputws()");
//*/

// The third
(*argp).p = ((*cch).caret_p);
(*argp).count = ((*cch).count);
(*argp).tail = ((*cch).tail);
coord.X = ((*cch).caret_pos.X);
coord.Y = ((*cch).caret_pos.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
