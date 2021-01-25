/*

Set CLI_IN to get the current cursor position or CLI_OUT to set the cursor position at argument io.

Remarks:
Refer at fn. cli_init_property.
The beta edition is for Windows 10 64-bit OS.
*/


# define CAR
# include "../../../incl/config.h"
# include <windows.h>

signed(__cdecl coord_beta(signed(io),signed(arg),coord_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto void *v;

auto COORD coord;
auto CONSOLE_SCREEN_BUFFER_INFO csbi;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);
v = GetStdHandle(STD_OUTPUT_HANDLE);
if(!v) flag++;
if(EQ(INVALID_HANDLE_VALUE,v)) flag++;
if(flag) {
printf("%s \n","<< Error at fn. GetStdHandle()");
return(0x00);
}

if(DBG_D<(DBG)) printf("%s %p \n","An offset address to the specified standard output device is:",v);

if(!(io^(CLI_IN))) {
// Get the current cursor position.
r = GetConsoleScreenBufferInfo(v,&csbi);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetConsoleScreenBufferInfo() with error no.",r,"or",r);
return(0x00);
}
if(arg<(CLI_RULE)) {
*(arg+(R(x,*argp))) = (R(X,R(dwCursorPosition,csbi)));
*(arg+(R(y,*argp))) = (R(Y,R(dwCursorPosition,csbi)));
}
else {
i = (CLI_RULE);
while(i) {
*(--i+(R(x,*argp))) = (R(X,R(dwCursorPosition,csbi)));
*(i+(R(y,*argp))) = (R(Y,R(dwCursorPosition,csbi)));
}}
return(0x01);
}

if(!(io^(CLI_OUT))) {
if(!(arg<(CLI_RULE))) return(0x00);
coord.X = (*(arg+(R(x,*argp))));
coord.Y = (*(arg+(R(y,*argp))));
r = SetConsoleCursorPosition(v,coord);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetConsoleCursorPosition() with error no.",r,"or",r);
return(0x00);
}
return(0x01);
}

return(0x00);
}
