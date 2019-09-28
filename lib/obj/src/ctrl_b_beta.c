/* **** Notes

Press <Ctrl-B> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl ctrl_b_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(SP) = (0x20);
auto signed char const(HT) = (0x09);

auto signed char(*p);
auto COORD(coord), (coord_b);
auto signed(cache), (i), (r);
auto signed(c);
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

if(!((*argp).count)) return(0x01);

p = ((*argp).p);
DEC((*argp).p);
DEC((*argp).count);

if(!(coord.X)) {
r = find_deadsp(argp);
DEC(coord.Y);
coord.X = ((*argp).csbi.srWindow.Right);
coord.X = (-r+(coord.X));
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
return(0x01);
}


// External Part.
c = (*((*argp).p));

if(!(c^(HT))) {
r = ncpy((*argp).craft, (*argp).init_p, (*argp).count);
r = ct_only('\t', (*argp).craft);
if(!r) {
r = ((*argp).count%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
coord.X = (-r+(coord.X));
}
else {
// back-ward search the last tab position.
XOR(cache,cache);
i = ((*argp).count);
while(i) {
c = (*(--i+((*argp).craft)));
if(!(c^(HT))) break;
cache++;
}
r = (cache%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
coord.X = (-r+(coord.X));
}}

else {
// It is not a tab i.e., (!0x09).
DEC(coord.X);
}

// Coordinates
if(!(coord.Y^((*argp).depart.Y))) {
}

else {
if(coord.X<(0x00)) {
DEC(coord.Y);
cache = ((*argp).csbi.srWindow.Right);
coord.X = (cache+(INC(coord.X)));
}}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
