/* **** Notes

Press <Ctrl-P> to invoke the function.

Paste.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
Refer at fn. cmdln_ctrl_y_beta and fn. vu_clip
Use fn. GetClipboardData.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_p_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto void(*window);
auto signed char(*p);

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);

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


window = GetForegroundWindow();

if(!window) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. GetForegroundWindow() with no. ", r);
return(0x00);
}

r = OpenClipboard(window);

if(!r) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. OpenClipboard() with no. ", r);
return(0x00);
}

p = GetClipboardData(CF_TEXT);

if(!p) {
// r = GetLastError();
// printf("%s%Xh", "<< Error at fn. GetClipboardData() with no. ", r);
XOR(flag,flag);
// continue..
}

else XNOR(flag);


/* Build a linked list */


/*
r = ct((*argp).clip);
if(!r) return(0x01);

cache = ((*argp).count);

if(!(cache^((*argp).tail))) {
r = append2((*argp).p, (*argp).clip);
if(!r) {
// It is empty ..or has occurred an error.
}
else {
ADD((*argp).count, r);
ADD((*argp).p, r);
ADD((*argp).tail, r);
}
// External Part.
r = _cputs((*argp).clip);
if(r) printf("%s", "<< Error at fn. _cputs()/_cputws()");
}

else {
r = cpy((*argp).craft, (*argp).p);
r = cpy((*argp).p, (*argp).clip);
ADD((*argp).count, r);
ADD((*argp).p, r);
ADD((*argp).tail, r);
// External Part.
r = _cputs((*argp).clip);
if(r) printf("%s", "<< Error at fn. _cputs()/_cputws()");
else {
r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}}
r = append2((*argp).p, (*argp).craft);
// External Part.
r = _cputs((*argp).craft);
if(r) printf("%s", "<< Error at fn. _cputs()/_cputws()");
// Set the caret.
r = SetConsoleCursorPosition((*argp).s_out, coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}

r = qrefresh((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. qrefresh()");
//*/


r = CloseClipboard();

if(!r) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. CloseClipboard() with no. ", r);
return(0x00);
}


r = SetConsoleCursorPosition((*argp).s_out,coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}


return(0x01);
}
