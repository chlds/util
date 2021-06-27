/* **** Notes

Output.

Remarks:
To debug
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_out_t(time_t(arg))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short sm,mn,hr;
auto signed short wk,di,mo,yr;

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));
wk = (R(tm_wday,*tp));

hr = (R(tm_hour,*tp));
mn = (R(tm_min,*tp));
sm = (R(tm_sec,*tp));

printf("%2d:%02d:%02d ",hr,mn,sm);
printf("%s %d %s %d",*(DAYOFTHEWK+(wk)),di,*(MONTH+(mo)),yr);

return(0x01);
}
