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
auto signed char(WS) = (' ');

auto SNAPSHOT(*cache);
auto COORD(coord);
auto signed(i), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!((*argp).clih.t)) return(0x01);
// (*argp).clih.t ..is alway reset the lead of history by fn. cmdln_history.

if(!((*((*argp).clih.t)).d)) return(0x01);

i = ct_txt(ALIGN_TAB,(*argp).init_p);

(*argp).clih.t = ((*((*argp).clih.t)).d);
cache = ((*argp).clih.t);

/* step back to avoid the leading address
if(!((*((*argp).clih.t)).d)) {
(*argp).clih.t = ((*((*argp).clih.t)).s);
return(0x01);
}
//*/

r = cpy((*argp).init_p, (*cache).p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. cpy()");
//*/

// The first: sync. with the workspace
coord.X = (0x00);
coord.Y = ((*argp).depart.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

/* Delete by overwriting */
while(i) {
r = c_out(&WS,argp);
if(!r) {
printf("%s", "<< Error at fn. c_out()");
return(0x00);
}
DEC(i);
}

// The second: sync. with the workspace
coord.X = (0x00);
coord.Y = ((*argp).depart.Y);

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

// The third: sync. parameters with the workspace
r = ct((*argp).init_p);
(*argp).tail = (r);

r = ((*cache).offset);
(*argp).count = (r);
(*argp).p = (r+((*argp).init_p));

// Countermeasure the multi-lines..
coord.Y = ((*argp).depart.Y);
i = (0x01+((*argp).csbi.srWindow.Right));
while(0x01) {
r = (-i+(r));
if(r<(0x01)) break;
INC(coord.Y);
}

coord.X = (i+(r));

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
