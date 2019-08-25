/* **** Notes

Clip and paste to the clipboard.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure

Along with fn. cmdln_ctrl_y.

Refer fn. cmdln_ctrl_u, cmdln_ctrl_n, cmdln_ctrl_b, cmdln_ctrl_f or..
Use fn. GlobalFree.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl vu_clip(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto void(*window);
auto void(*heap);
auto void(*data);
auto signed char(*p);

auto COORD(coord);
auto size_t(siz);

auto signed(cache), (r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

heap = GlobalAlloc(GMEM_SHARE|(GHND),(*argp).clipped_bytes);
// p = GlobalAlloc(GMEM_FIXED,(*argp).clipped_bytes);

if(!heap) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. GlobalAlloc() with no. ", r);
return(0x00);
}

(*argp).globally_secured = (heap);

siz = GlobalSize(heap);

if(!siz) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. GlobalSize() with no. ", r);
return(0x00);
}

// else printf("%s%zd%s", "Globally secured: ", siz, " bytes.");

//*
p = (signed char(*)) GlobalLock(heap);

if(!p) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. GlobalLock() with no. ", r);
return(0x00);
}
//*/

r = cpy(p,(*argp).locally_secured);

/* It is empty ..or has occurred an error.
if(!r) {
printf("%s", "<< Error at fn. cpy() in fn. vu_clip()");
return(0x00);
}
//*/

//*
r = GlobalUnlock(heap);

if(!r) {
r = GetLastError();
if(!(r^(NO_ERROR))) {
}
else {
printf("%s%Xh", "<< Error at fn. GlobalUnlock() with no. ", r);
return(0x00);
}}

else {
// decrement or increment.. e.g., use fn. GlobalFlag.
r = GetLastError();
printf("%s%Xh", "<< Error at fn. GlobalUnlock() with no. ", r);
return(0x00);
}
//*/

/*
r = GlobalFlags(heap);

if(!(r^(GMEM_INVALID_HANDLE))) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. GlobalFlags() with no. ", r);
return(0x00);
}

else {
printf("%s%d%s%Xh", "Global Flags: ", r, " or ", r);
}
//*/

window = GetActiveWindow();

if(!window) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. GetActiveWindow() with no. ", r);
return(0x00);
}




/* **** Occur a fatal error here.. */

r = OpenClipboard(window);

if(!r) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. OpenClipboard() with no. ", r);
return(0x00);
}




r = EmptyClipboard();

if(!r) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. EmptyClipboard() with no. ", r);
return(0x00);
}

data = SetClipboardData(CF_TEXT,p);
// data = SetClipboardData(CF_TEXT,heap);

if(!data) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. SetClipboardData() with no. ", r);
return(0x00);
}

r = CloseClipboard();

if(!r) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. CloseClipboard() with no. ", r);
return(0x00);
}


/* refer at fn. cmdln_ctrl_y_beta and at fn. vu_gate.
heap = GlobalFree(heap);

if(heap) {
r = GetLastError();
printf("%s%Xh", "<< Error at fn. GlobalFree() with no. ", r);
return(0x00);
}
//*/


return(0x01);
}
