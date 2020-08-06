/*

Write to a console screen buffer.

Remarks:
As a wrapper
*/


# define CBR
# define CLI_W32

# include "../../../incl/config.h"

signed(__cdecl cli_out_to_beta(void(*target),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!target) return(0x00);
if(!argp) return(0x00);

r = WriteConsole(target,argp,ct(argp),&i,0x00);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. WriteConsole() with error no. ",r,"/",r);
return(0x00);
}
if(i^(ct(argp))) {
printf("%s\n","<< Error at fn. WriteConsole()");
return(0x00);
}

return(r);
}
