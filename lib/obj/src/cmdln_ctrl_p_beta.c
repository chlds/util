/* **** Notes

Press <Ctrl-P> to invoke the function.

Paste.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
Refer at fn. cmdln_ctrl_y_beta and fn. vu_clip
Use fn. qpaste
Use fn. GetClipboardData
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_p_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto void(*window);
auto signed char(*bp),(*p);

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

// flag for the clipboard, refer fn. cmdln_ctrl_y_beta, vu_clip or..
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
if(C_DBG) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. GetClipboardData() with no. ", r);
}
r = CloseClipboard();
if(!r) {
if(C_DBG) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. CloseClipboard() with no. ", r);
}}
return(0x01);
}


/* prepare */
/*
r = cpy((*argp).craft,(*argp).p);


r = cpy2('\n',(*argp).p,p);

if(!(*(r+(p)))) {
XNOR(flag);
}

else {
p = (0x01+(r+(p)));
XOR(flag,flag);
if(!(-'\r'+(*(-0x02+(p))))) {
DEC(r);
*(r+((*argp).p)) = ('\0');
}}

ADD((*argp).count,r);
ADD((*argp).tail,r);
ADD((*argp).p,r);


// Instantly..
ADD(coord.X,r);


// UN-COMPLETED..
if(!flag) {
r = qpaste(argp);
if(!r) {
}}




r = cpy((*argp).p,(*argp).craft);


// refresh
r = qrefresh((*argp).t,argp);

if(!r) {
printf("%s", "<< Error at fn. qrefresh()");
return(0x00);
}
//*/


r = CloseClipboard();

if(!r) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. CloseClipboard() with no. ", r);
return(0x00);
}


//*
r = SetConsoleCursorPosition((*argp).s_out,coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

return(0x01);
}
