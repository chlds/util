/* **** Notes

Press <Ctrl-F> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl ctrl_f_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(SP) = (0x20);
auto signed char const(HT) = (0x09);
auto signed char(*p);
auto COORD(coord),(coord_b);
auto signed i,r;
auto signed short(cols);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

// flag for the clipboard, refer fn. cmdln_ctrl_y, vu_clip or..
XNOR((*argp).clip_reset);

(*argp).deadsp_by_wrapping = (0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
coord_b.X = (coord.X);
coord_b.Y = (coord.Y);

r = ((*argp).tail);

if(!(r^((*argp).count))) return(0x01);

if(r<((*argp).count)) {
printf("%s", "<< Error at fn. ctrl_f_beta()");
return(0x00);
}

p = ((*argp).p);
((*argp).count)++;
((*argp).p)++;

/* External Part. */
cols = (0x01+((*argp).csbi.srWindow.Right));
XOR(flag,flag);

if(!(HT^(*p))) {


// word-wrap
r = ct_word((*argp).p);
i = (-0x01+(cols));
if(i<(coord.X+(ALIGN_TAB+(r)))) {
INC(coord.Y);
XOR(coord.X,coord.X);
r = SetConsoleCursorPosition((*argp).s_out,coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
return(0x01);
}


XNOR(flag);
r = (coord.X%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
coord.X = (coord.X+(r));
r = (cols);
if(--r<(coord.X)) {
INC(coord.Y);
coord.X = (coord.X%(cols));
}}

if(!flag) {
INC(coord.X);
r = (cols);
if(--r<(coord.X)) {
INC(coord.Y);
XOR(coord.X,coord.X);
}
else {
/* word-wrap */
r = ct_word((*argp).p);
ADD(coord_b.X,r);
r = (-0x02+(cols));
if(r<(coord_b.X)) {
if(!(SP^(*p))) {
INC(coord.Y);
XOR(coord.X,coord.X);
}}}}


r = SetConsoleCursorPosition((*argp).s_out,coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
