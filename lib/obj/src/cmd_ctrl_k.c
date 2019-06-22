/* **** Notes

Press <Ctrl-K> to invoke the function.

in the Command Mode

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmd_ctrl_k(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
// extern signed(debugging);

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

r = ((*argp).cmd_io.count);

if(!(r^((*argp).cmd_io.tail))) {
}

else {
cache = ct_txt(ALIGN_TAB, (*argp).cmd_io.p);
// Copy a line after the (*argp).p to a clip board (and type <Ctrl-P> to paste the one).
r = cpy((*argp).clip, (*argp).cmd_io.caret);
if(!r) {
printf("%s\n", "<< Error at fn. cpy()");
return(0x00);
}
if(debugging) (*argp).copied = (r);
// Internal Part.
r = cipher_embed((*argp).cmd_io.caret, r);
if(!r) {
printf("%s\n", "<< Error at fn. cipher_embed()");
return(0x00);
}
if(debugging) (*argp).embedded = (r);
(*argp).cmd_io.tail = (-r+((*argp).cmd_io.tail));
// External Part.
r = ct_txt(ALIGN_TAB, (*argp).cmd_io.p);
cache = (-r+(cache));
if(debugging) (*argp).repeat = (cache);
while(cache) {
if(debugging) r = _putch('=');
else r = _putch(' ');
--cache;
}
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

return(0x01);
}