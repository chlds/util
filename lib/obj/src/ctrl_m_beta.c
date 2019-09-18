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

signed(__cdecl ctrl_m_beta(CMDLN_STAT(*argp))) {

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

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);

r = cpy((*argp).craft,(*argp).p);

if(!r) {
if(!((*((*argp).t)).d)) XOR((*argp).insert,(*argp).insert);
else XNOR((*argp).insert);
}

else XNOR((*argp).insert);

*((*argp).p) = ('\0');

if((*argp).insert) {
cache = (KNOT*) malloc(0x01*(sizeof(KNOT)));
if(!cache) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}
(*cache).cols = (0x00);
(*cache).p = (0x00);
(*cache).depart.X = (0x00);
(*cache).depart.Y = ((*argp).depart.Y);
(*cache).clih.l = ((*argp).clih.l);
(*cache).clih.b = ((*argp).clih.b);
(*cache).clih.t = ((*argp).clih.t);
/* Flag on a knot that ends with LF (0x0A) */
XNOR((*cache).linefeed);
// Also refer at fn. cmdln_load_internal, fn. cmdln_writing, hd. incl/ll.h and hd. incl/cmdln.h and more.
/* concatenate */
r = insert2ll(cache,argp);
if(!r) printf("%s", "<< Error at fn. insert2ll()");
// and to copy
r = ct((*argp).init_p);
INC(r);
(*cache).p = (signed char(*)) malloc(r*(sizeof(signed char)));
if(!((*cache).p)) {
printf("%s", "<< Error at fn. malloc() the second");
return(0x00);
}
r = cpy((*cache).p,(*argp).init_p);
r = clearhere(argp);
if(!r) {
printf("%s", "<< Error at fn. clearhere()");
return(0x00);
}}

XNOR(terminate);

XOR(coord.X,coord.X);
INC(coord.Y);

r = SetConsoleCursorPosition((*argp).s_out,coord);

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
