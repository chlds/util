/* **** Notes

Press <Ctrl-[> to invoke the function.

UN-COMPLETED

Redo.

Remarks:
Please look at util/incl/ll.h
Refer at fn. cmdln_ctrl_lbracket() for the hist flag.
//*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_redo(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto SNAPSHOT(*cch);
auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!((*argp).clih.t)) {
if(!((*argp).clih.l)) return(0x01);
else (*argp).clih.t = ((*argp).clih.b);
}
// (*argp).clih.t ..is alway reset the lead of history by fn. cmdln_history.

else {
if(!((*((*argp).clih.t)).d)) return(0x01);
(*argp).clih.t = ((*((*argp).clih.t)).d);
}

// step back to avoid the leading address
if(!((*((*argp).clih.t)).d)) {
(*argp).clih.t = ((*((*argp).clih.t)).s);
return(0x01);
}

cch = ((*((*argp).clih.t)).d);

r = cpy((*argp).init_p, (*cch).p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. cpy()");
//*/

cache = ((*argp).tail);

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
while(cache) {
r = _putch(' ');
DEC(cache);
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
