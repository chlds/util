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

signed(__cdecl cmdln_ctrl_k(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(EQ) = ('=');
auto signed char(WS) = (' ');

auto COORD(coord);
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

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

r = ((*argp).count);

if(!(r^((*argp).tail))) {
return(0x01);
}

else {
cache = ct_txt(ALIGN_TAB, (*argp).init_p);
i = (cache);
// Copy a line after the (*argp).p to a clip board (and type <Ctrl-P> to paste the one).
r = cpy((*argp).clip, (*argp).p);
if(!r) {
printf("%s\n", "<< Error at fn. cpy()");
return(0x00);
}
if(C_DBG) (*argp).copied = (r);
// Internal Part.
r = cipher_embed((*argp).p, r);
if(!r) {
printf("%s\n", "<< Error at fn. cipher_embed()");
return(0x00);
}
if(C_DBG) (*argp).embedded = (r);
(*argp).tail = (-r+((*argp).tail));
// (*argp).count = ((*argp).tail);
// External Part.
r = ct_txt(ALIGN_TAB, (*argp).init_p);
cache = (-r+(cache));
if(C_DBG) (*argp).repeat = (cache);
while(cache) {
if(C_DBG) r = c_out(&EQ,argp);
else r = c_out(&WS,argp);
if(!r) {
printf("%s", "<< Error at fn. c_out()");
return(0x00);
}
--cache;
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

if(i<(0x01+((*argp).csbi.srWindow.Right))) return(0x01);

r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");

return(0x01);
}
