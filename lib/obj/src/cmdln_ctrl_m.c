/* **** Notes

Press <Ctrl-M> to invoke the function.

Line Feed (0x0A)

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_m(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);
extern signed(command_mode);
extern signed(cmd_io_terminate);

auto signed char(ws) = (' ');

auto COORD(coord);
auto COORD(coord_b);
auto KNOT(*cache);
auto signed(i), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

// flag for the clipboard, refer fn. cmdln_ctrl_y, vu_clip or..
XNOR((*argp).clip_reset);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

i = ct_txt(ALIGN_TAB,(*argp).init_p);

r = cpy((*argp).craft,(*argp).p);

if(!r) {
if(!((*((*argp).t)).d)) XOR((*argp).insert,(*argp).insert);
else XNOR((*argp).insert);
}

else XNOR((*argp).insert);

*((*argp).p) = (signed char) ('\0');

if((*argp).insert) {

cache = (KNOT*) malloc(0x01*(sizeof(KNOT)));

if(!cache) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}

else {
(*cache).p = (signed char(*)) (0x00);
// initialise on the current new knot
(*cache).depart.X = (0x00);
(*cache).depart.Y = ((*argp).depart.Y);
// also register on the current new knot
(*cache).clih.l = ((*argp).clih.l);
(*cache).clih.b = ((*argp).clih.b);
(*cache).clih.t = ((*argp).clih.t);
}

r = insert2ll(cache,argp);

if(!r) printf("%s", "<< Error at fn. insert2ll()");

r = ct((*argp).init_p);

INC(r);
(*cache).p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!((*cache).p)) {
printf("%s", "<< Error at fn. malloc() the second");
return(0x00);
}

r = cpy((*cache).p,(*argp).init_p);

coord_b.X = ((*((*argp).t)).depart.X);
coord_b.Y = ((*((*argp).t)).depart.Y);
r = SetConsoleCursorPosition((*argp).s_out,coord_b);
if(!r) printf("%s", "<< Error at fn. SetConsoleCursorPosition()");
while(i) {
r = c_out(&ws,argp);
DEC(i);
}
r = SetConsoleCursorPosition((*argp).s_out,coord_b);
if(!r) printf("%s", "<< Error at fn. SetConsoleCursorPosition()");
r = c_outs((*cache).p,argp);


/* switch the temporary, lead and base knots
if(CONCAT2LL^((*argp).concat_type)) {
}
if(REBASE2LL^((*argp).concat_type)) {
}
if(ABSORB2LL^((*argp).concat_type)) {
}
//*/

}

XNOR(terminate);

coord.X = (0x00);
coord.Y = ((*argp).depart.Y);

r = ct_txt(ALIGN_TAB,(*argp).init_p);

i = (0x01+((*argp).csbi.srWindow.Right));
while(0x01) {
INC(coord.Y);
r = (-i+(r));
if(r<(0x01)) break;
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

INC((*argp).nknot);

/* Comment out to save resources..
// quickly refresh a part of console screen.
r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");
//*/

(*argp).q_refresh = (0x00);

return(0x01);
}
