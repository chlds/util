/* **** Notes

UNCOMPLETED..

Display a help page.

Remarks:
To close the console screen buffer handle, use the CloseHandle function.
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_help(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
enum {
SI, DI, CACHE
};

auto signed char(*p) = ("-- WELCOME TO THE HELP PAGE OF CONSOLE TEXT EDITOR VU (Beta) --\n\n\n\
Ctrl-C: Command Mode (Beta)\n\
  Enter a number to jump to the line.\n\n\
Ctrl-A: Place the caret to the lead of the current line.\n\
Ctrl-E: Place the caret to the end of the current line.\n\
Ctrl-T: Place the caret to the next word in the current line.\n\
Ctrl-R: Place the caret to the previous word in the current line.\n\n\
Ctrl-V: View in reading. (To be implemented in the future)\n\n\
Ctrl-D: Delete a character or a line.\n\
Ctrl-H: Delete a character or a line.\n\n\
Ctrl-W: Delete a part of the word or a word.\n\
Ctrl-[: Redo. (Ctrl-W only)\n\
Ctrl-]: Undo. (Ctrl-W only)\n\n\
Ctrl-Y: Copy a part of the current line or lines. (Disabled: Currently under construction)\n\
Ctrl-P: Paste. (Disabled: Currently under construction)\n\n\
Ctrl-S: Save.\n\
  Caution: Line breaks are saved as CR (0x0D) and LF (0x0A) in this editor. Please be careful.\n\n\
Ctrl-Q: Quit.\n\n\
Please type any key to return..\
");

auto SMALL_RECT(rect_b);
auto COORD(coord), (coord_b);
auto signed(cache), (i), (r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

/*
r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}
//*/

/* set the title */
if((*argp).filename) {
r = SetConsoleTitle((*argp).filename);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleTitle() with error no. ", r);
return(0x00);
}}

/* map two offscreen buffers on the RAM */
i = (OFFSCREEN_BUFF);

while(i) {
DEC(i);
*(i+((*argp).offscreen)) = (void*) CreateConsoleScreenBuffer(
GENERIC_READ|(GENERIC_WRITE),
0x00 /* FILE_SHARE_READ|(FILE_SHARE_WRITE) */ ,
0x00,
CONSOLE_TEXTMODE_BUFFER,
0x00
);
if(!((signed long long) INVALID_HANDLE_VALUE^((signed long long) *(i+((*argp).offscreen))))) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. CreateConsoleScreenBuffer() with error no. ", r);
return(0x00);
}}

/* set the console screen buffer size */
coord_b.X = ((*argp).csbi.dwSize.X);
coord_b.Y = ((*argp).csbi.dwSize.Y);

i = (OFFSCREEN_BUFF);

while(i) {
DEC(i);
r = SetConsoleScreenBufferSize(*(i+((*argp).offscreen)),coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleScreenBufferSize() with error no. ", r);
return(0x00);
}}

/* set the console window size */
rect_b.Left = (0x00);
rect_b.Top = (0x00);
rect_b.Right = (-1+((*argp).csbi.dwMaximumWindowSize.X));
rect_b.Bottom = (-1+((*argp).csbi.dwMaximumWindowSize.Y));

i = (OFFSCREEN_BUFF);

while(i) {
DEC(i);
r = SetConsoleWindowInfo(*(i+((*argp).offscreen)),0x01,&rect_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleWindowInfo() with error no. ", r);
return(0x00);
}}

/* announcement */
r = WriteConsole(*(SI+((*argp).offscreen)),p,ct(p),&i,0x00);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. WriteConsole() with error no. ", r);
return(0x00);
}

/* switch */
r = SetConsoleActiveScreenBuffer(*(SI+((*argp).offscreen)));

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleActiveScreenBuffer() with error no. ", r);
return(0x00);
}

XOR(flag,flag);

r = _getch();

if(!(r^(0xE0))) XNOR(flag);
if(!r) XNOR(flag);

if(flag) r = _getch();

/* switch back */
r = SetConsoleActiveScreenBuffer((*argp).s_out);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleActiveScreenBuffer() with error no. ", r);
return(0x00);
}

/* unmap */
i = (OFFSCREEN_BUFF);

while(i) {
DEC(i);
r = CloseHandle(*(i+((*argp).offscreen)));
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. CloseHandle() with error no. ", r);
return(0x00);
}}

/*
r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}
//*/

return(0x01);
}
