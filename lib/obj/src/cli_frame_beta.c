/*

Make a compact frame.

Remarks:
Refer at fn. cli_eq_frame, fn. cli_eq_internal, fn. cli_eq, fn. cli_parse and util/bin/obj/src/ty.c.
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_frame_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *(frame[]) = {
(signed char(*)) ("Default"),
(signed char(*)) ("Left"),
(signed char(*)) ("Center"),
(signed char(*)) ("Right"),
(signed char(*)) (0x00),
};

auto signed char *p;
auto signed width;
auto signed height;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

p = (*(frame+(R(compact_frame,R(ty,*argp)))));
if(!p) return(0x00);

printf("%s%s\n","Frame: ",p);

r = GetSystemMetrics(SM_CXSCREEN);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. GetSystemMetrics(SM_CXSCREEN) with error no. ",r," or ",r);
return(0x00);
}
R(x,R(pixel,R(ty,*argp))) = (r);
width = (r);
SHR(width,0x02);
if(CLI_DBG) printf("%s%d%s%d\n","Width/X: ",width,"/",R(x,R(pixel,R(ty,*argp))));

r = GetSystemMetrics(SM_CYSCREEN);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. GetSystemMetrics(SM_CYSCREEN) with error no. ",r," or ",r);
return(0x00);
}
R(y,R(pixel,R(ty,*argp))) = (r);
height = (r);
SHR(height,0x01);
SHR(r,0x02);
ADD(height,r);
if(CLI_DBG) printf("%s%d%s%d\n","Height/Y: ",height,"/",R(y,R(pixel,R(ty,*argp))));

return(0x01);
}
