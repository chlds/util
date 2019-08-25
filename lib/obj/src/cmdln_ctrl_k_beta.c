/* **** Notes

Press <Ctrl-K> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_k_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(EQ) = ('=');
auto signed char(WS) = (' ');

auto COORD(coord), (coord_b);
auto signed(cache), (i), (r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);

coord_b.X = (coord.X);
coord_b.Y = (coord.Y);

r = ((*argp).count);

if(!(r^((*argp).tail))) {
return(0x01);
}

/* Internal */
// Aux.
r = ct((*argp).p);
r = cipher_embed((*argp).p, r);
if(!r) {
printf("%s\n", "<< Error at fn. cipher_embed()");
return(0x00);
}
if(C_DBG) (*argp).embedded = (r);

(*argp).p = ('\0');
(*argp).tail = ((*argp).count);

r = sustain(argp);

if(!r) {
printf("%s\n", "<< Error at fn. sustain()");
return(0x00);
}

/* External */
r = clearhere(argp);

if(!r) {
printf("%s\n", "<< Error at fn. clearhere()");
return(0x00);
}

XOR(coord_b.X,coord_b.X);
INC(coord_b.Y);

if(coord_b.Y<(0x01+((*argp).csbi.srWindow.Bottom))) {
r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
r = qrefresh((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. qrefresh()");
return(0x00);
}}

return(0x01);
}
