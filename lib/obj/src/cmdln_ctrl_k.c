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
auto signed const(ALIGN_TAB) = (0x08);

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

cache = ((*argp).count);

if(!(cache^((*argp).tail))) {
}

else {
// Copy a line after the (*argp).p to a clip board (and type <Ctrl-P> to paste the one).
r = cpy((*argp).clip, (*argp).p);
if(!r) {
printf("%s\n", "<< Error at fn. cpy()");
return(0x00);
}
else {
// printf("%s%d%s", "<< Copied ", r, " letters.");
}
// Internal Part.
cache = (-cache+((*argp).tail));
r = cipher_embed((*argp).p, cache);
if(!r) {
printf("%s\n", "<< Error at fn. cipher_embed()");
return(0x00);
}
(*argp).tail = (-cache+((*argp).tail));
// External Part.
cache = ct_txt(ALIGN_TAB, (*argp).clip);
while(cache) {
r = _putch(' ');
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
