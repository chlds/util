/*

Display the version.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_vers_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char SP = (' ');
auto signed char ESC = (0x1B);
auto signed char CR = ('\r');
auto signed char LF = ('\n');
auto signed char BS = (0x08);

auto signed char character[] = {
(signed char) ('q'),
(signed char) ('Q'),
(signed char) (SP),
(signed char) (ESC),
(signed char) (CR),
(signed char) (LF),
(signed char) (BS),
(signed char) (0x00),
};

auto signed char *header = ("\n\n\
  < \
");

auto signed char *no_file = ("No file");

auto signed char *edit = ("\n\n\n\n\
  Currently being edited by \
");

auto signed char *footer = ("\n\n\n\n\
  WELCOME TO TY.EXE :)\n\n\
  Version: 0.4.1\n\
  GitHub: github.com/chlds/util/\n\
  \
");

auto SMALL_RECT sr;
auto COORD coord;
auto void *ccsb;
auto signed short *w;
auto signed char *cur,*p;
auto signed long long ll;
auto signed i,l,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}

ccsb = (void*) CreateConsoleScreenBuffer(
GENERIC_READ|(GENERIC_WRITE),
0x00/* FILE_SHARE_READ|(FILE_SHARE_WRITE) */,
0x00,
CONSOLE_TEXTMODE_BUFFER,
0x00
);
ll = ((signed long long) ccsb);
if(!(ll^((signed long long) INVALID_HANDLE_VALUE))) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. CreateConsoleScreenBuffer() with error no. ",r," or ",r);
return(0x00);
}

coord.Y = (R(Y,R(dwSize,R(csbi,*argp))));
coord.X = (R(X,R(dwSize,R(csbi,*argp))));
r = SetConsoleScreenBufferSize(ccsb,coord);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. SetConsoleScreenBufferSize() with error no. ",r," or ",r);
return(0x00);
}

sr.Top = (0x00);
sr.Left = (0x00);
sr.Bottom = (-0x01+(R(Y,R(dwMaximumWindowSize,R(csbi,*argp)))));
sr.Right = (-0x01+(R(X,R(dwMaximumWindowSize,R(csbi,*argp)))));
r = SetConsoleWindowInfo(ccsb,0x01,&sr);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. SetConsoleWindowInfo() with error no. ",r," or ",r);
return(0x00);
}

r = WriteConsole(ccsb,header,ct(header),&i,0x00);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. WriteConsole() with error no. ",r," or ",r);
return(0x00);
}

p = (R(file,R(edit,R(ty,*argp))));

if(!p) {
p = (no_file);
r = WriteConsole(ccsb,p,ct(p),&i,0x00);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. WriteConsole() with error no. ",r," or ",r);
return(0x00);
}
p = (0x00);
}

else {
r = keep_w(&w,p);
if(!r) {
printf("%s\n","<< Error at fn. keep_w()");
return(0x00);
}
l = (r);
r = WriteConsoleW(ccsb,w,ct_w(w),&i,0x00);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. WriteConsoleW() with error no. ",r," or ",r);
return(0x00);
}
r = release(l,&w);
if(!r) {
printf("%s\n","<< Error at fn. release()");
return(0x00);
}}

r = WriteConsole(ccsb,edit,ct(edit),&i,0x00);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. WriteConsole() with error no. ",r," or ",r);
return(0x00);
}

p = getenv("USERNAME");
if(!p) {
printf("%s\n","<< Error at fn. getenv()");
return(0x00);
}

r = WriteConsole(ccsb,p,ct(p),&i,0x00);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. WriteConsole() with error no. ",r," or ",r);
return(0x00);
}

p = (0x00);

r = WriteConsole(ccsb,footer,ct(footer),&i,0x00);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. WriteConsole() with error no. ",r," or ",r);
return(0x00);
}

r = SetConsoleActiveScreenBuffer(ccsb);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. SetConsoleActiveScreenBuffer() with error no. ",r," or ",r);
return(0x00);
}

flag = (0x00);
while(0x01) {
if(flag) break;
r = _getch();
i = (0x00);
while(*(character+(i))) {
if(!(r^(*(character+(i++))))) flag++;
}}

r = SetConsoleActiveScreenBuffer(*(CLI_OUT+(R(device,*argp))));
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. SetConsoleActiveScreenBuffer() with error no. ",r," or ",r);
return(0x00);
}

r = CloseHandle(ccsb);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. CloseHandle() with error no. ",r," or ",r);
return(0x00);
}

return(0x01);
}
