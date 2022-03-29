/* **** Notes

Alert.

Remarks:
Return (0x00) on failure.
Return (~0x00) if less than one hour ahead.
Return (~0x01) if more than one hour ahead.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl alert_b(signed(arg),signed char(*argp))) {

auto signed char *b;
auto struct tm *tp;
auto signed r;
auto signed short h,hr;
auto signed short m,mn;
auto time_t t;
auto signed short hours = (24);

if(!argp) return(0x00);

if(!(cv_hr(&hr,&mn,argp))) return(0x00);

time(&t);
tp = gmtime(&t);
if(arg) tp = localtime(&t);
if(!tp) return(0x00);

m = (R(tm_min,*tp));
h = (R(tm_hour,*tp));
if(!(EQ(h,hr))) {
h++;
h = (h%(hours));
if(EQ(h,hr)) {
if(mn<(m)) return(~0x00); // near
}
return(~0x01); // far
}

if(m<(mn)) return(~0x00); // near
if(mn<(m)) return(~0x01); // far

return(0x01);
}
