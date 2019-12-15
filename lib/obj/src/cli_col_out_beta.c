/*

Form a column in the console screen.

Remarks:
Based on fn. cli_out
Return the number of bytes for a Unicode character output in UTF-8.
Refer at fn. cli_init_ty_beta.
*/


# define CLI_W32
# define R(D,S) (S).D
// A local macro function

# include "../../../incl/config_ty.h"

signed(__cdecl cli_col_out_beta(signed char(*cur),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD coord;

auto signed long long ll;
auto signed char *p;
auto signed nbyte;
auto signed i,r;
auto signed short x,y;
auto signed short flag;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

if(!(*(CLI_OUT+(R(device,*argp))))) {
printf("%s\n","<< Get a handle to the specified standard output device.");
return(0x00);
}

if(CLI_DBG_D<(CLI_DBG)) printf("%s%p\n","An offset address for a handle to the specified standard output device is: ",*(CLI_OUT+(R(device,*argp))));

r = GetConsoleScreenBufferInfo(*(CLI_OUT+(R(device,*argp))),&(R(csbi,*argp)));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleScreenBufferInfo() with error no. ",r," or ",r);
return(0x00);
}

coord.X = (R(X,R(dwCursorPosition,R(csbi,*argp))));
coord.Y = (R(Y,R(dwCursorPosition,R(csbi,*argp))));
x = (coord.X);

if(!(x^(R(Right,R(srWindow,R(csbi,*argp)))))) flag = (0x01);
else flag = (0x00);

// output
r = cli_out(cur);
if(!r) {
printf("%s\n","<< Error at fn. cli_out()");
return(0x00);
}

nbyte = (r);

// after outputting
if(flag) {
r = GetConsoleScreenBufferInfo(*(CLI_OUT+(R(device,*argp))),&(R(csbi,*argp)));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleScreenBufferInfo() with error no. ",r," or ",r);
return(0x00);
}
y = (R(Y,R(dwCursorPosition,R(csbi,*argp))));
if(!(y^(coord.Y))) {
coord.X = (0x00);
coord.Y = (0x01+(coord.Y));
r = SetConsoleCursorPosition(*(CLI_OUT+(R(device,*argp))),coord);
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCursorPosition() with error no. ",r," or ",r);
return(0x00);
}}}

return(nbyte);
}
