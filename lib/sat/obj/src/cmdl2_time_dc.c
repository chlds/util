/* **** Notes

Commandlet to output the local time

Remarks:
Transparency
*/


# define DUAL_CONFIG_H
# define CAR_H
# define CAW_H
# define SAT_H
# define STDIO_H
# define STDLIB_H
# define WIN32_H
# define CALEND
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl cmdl2_time_dc(SAT(*argp))) {

auto void *(dc[OBJS]);
auto void *cdc;
auto void *desktop;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

desktop = GetDesktopWindow();
cdc = (void*) GetDC((void*)desktop);
if(!cdc) {
printf("%s \n","<< Error at GetDC()");
return(0x00);
}

AND(flag,0x00);
i = (OBJS);
while(i) {
*(--i+(dc)) = (void*) CreateCompatibleDC(cdc);
if(!(*(i+(dc)))) {
printf("%s \n","<< Error at fn. CreateCompatibleDC()");
OR(flag,0x01);
}}

if(!(ReleaseDC(desktop,cdc))) {
printf("%s \n","<< Error at ReleaseDC()");
OR(flag,0x01);
}

R(dc,*argp) = (dc);
if(!flag) {
r = cmdl2_time_bm(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_bm()");
}

i = (OBJS);
while(i) {
if(DeleteDC(*(--i+(dc)))) *(i+(dc)) = (0x00);
else {
printf("%s %d \n","<< Error at fn. DeleteDC() and i:",i);
OR(flag,0x01);
}}

if(flag) AND(r,0x00);

return(r);
}
