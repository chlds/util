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

signed(__cdecl cmdl2_time_bm(SAT(*argp))) {

auto void *(bm[OBJS]);
auto void *cdc;
auto void *desktop;
auto signed x,y;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

x = currently_operating_pixels(0x00);
y = (SHADE_YPOS+(R(height,R(font,*argp))));
desktop = GetDesktopWindow();
cdc = (void*) GetDC((void*)desktop);
if(!cdc) {
printf("%s \n","<< Error at fn. GetDC()");
return(0x00);
}

AND(flag,0x00);
i = (OBJS);
while(i) {
*(--i+(bm)) = (void*) CreateCompatibleBitmap(cdc,x,y);
if(!(*(i+(bm)))) {
printf("%s \n","<< Error at fn. CreateCompatibleBitmap()");
OR(flag,0x01);
}}

if(!(ReleaseDC(desktop,cdc))) {
printf("%s \n","<< Error at fn. ReleaseDC()");
OR(flag,0x01);
}

R(bm,*argp) = (bm);
if(!flag) {
r = cmdl2_time_select(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_select()");
}

i = (OBJS);
while(i) {
if(delete_object_beta(*(--i+(bm)))) *(i+(bm)) = (0x00);
else {
printf("%s %d \n","<< Error at fn. delete_object_beta() for a compatible bitmap object and i:",i);
OR(flag,0x01);
}}

if(flag) AND(r,0x00);

return(r);
}
