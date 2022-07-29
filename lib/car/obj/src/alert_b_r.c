/* **** Notes

Alert

Remarks:
Return (0x00) on failure.
Return (~0x00) if less than 5 minutes ahead.
Return (~0x01) if more than 5 minutes ahead.
*/


# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl alert_b_r(signed(arg),signed short(hr),signed short(mn))) {
auto struct tm *tp;
auto signed short h;
auto signed short m;
auto time_t t;
auto signed short min_before = (5);
auto signed short minutes = (60);
auto signed short hours = (24);
auto void*(__cdecl*f)(void(*argp));
auto void*(__cdecl*(fn[]))(void(*argp)) = {
gmtime,
localtime,
0x00,
};
if(hr<(0x00)) return(0x00);
if(!(hr<(hours))) return(0x00);
if(!(mn<(minutes))) return(0x00);
if(mn<(0x00)) return(0x00);
time(&t);
if(arg) arg = (0x01);
f = (*(arg+(fn)));
tp = f(&t);
if(!tp) return(0x00);
m = (R(tm_min,*tp));
h = (R(tm_hour,*tp));
if(!(EQ(h,hr))) {
h++;
h = (h%(hours));
if(EQ(h,hr)) {
mn = (minutes+(mn));
mn = (mn+(0x01+(~m)));
if(mn<(min_before)) return(~0x00); // near
}
return(~0x01); // far
}
mn = (mn+(0x01+(~m)));
if(!mn) return(0x01);
if(mn<(0x00)) return(~0x01); // far
if(mn<(min_before)) return(~0x00); // near
return(~0x01); // far
}
