/*

Set CLI_IN to get the screen pixels at argument io.

Remarks:
Refer at fn. cli_init_property.
The beta edition is for Windows 10 64-bit OS.
*/


# define CAR
# include "../../../incl/config.h"
# include <windows.h>

signed(__cdecl pixel_beta(signed short(io),signed short(arg),pixel_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto void *v;

auto CONSOLE_SCREEN_BUFFER_INFO csbi;
auto signed x,y;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

/*
AND(flag,0x00);
v = GetStdHandle(STD_OUTPUT_HANDLE);
if(!v) flag++;
if(EQ(INVALID_HANDLE_VALUE,v)) flag++;
if(flag) {
printf("%s \n","<< Error at fn. GetStdHandle()");
return(0x00);
}

if(DBG_D<(DBG)) printf("%s %p \n","An offset address to the specified standard output device is:",v);
//*/

if(!(io^(CLI_IN))) {
x = GetSystemMetrics(SM_CXSCREEN);
if(!x) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetSystemMetrics(SM_CXSCREEN) with error no.",r,"or",r);
return(0x00);
}
y = GetSystemMetrics(SM_CYSCREEN);
if(!y) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetSystemMetrics(SM_CYSCREEN) with error no.",r,"or",r);
return(0x00);
}
if(arg<(CLI_BOIL)) {
*(arg+(R(x,*argp))) = (x);
*(arg+(R(y,*argp))) = (y);
}
else {
i = (CLI_BOIL);
while(i) {
*(--i+(R(x,*argp))) = (x);
*(i+(R(y,*argp))) = (y);
}}
return(0x01);
}

if(!(io^(CLI_OUT))) return(0x01);

return(0x00);
}
