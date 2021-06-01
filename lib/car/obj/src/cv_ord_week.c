/* **** Notes

Convert into an ordinal number of the week in the month from the time.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_ord_week(time_t(arg))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short wk,di,mo,yr;
auto signed short flag;

if(!arg) return(0x00);

t = (arg);
// time(&t);
tp = localtime(&t);
if(!tp) return(0x00);

yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));

r = (signed) (di);
i = (r);

r = (r/(DAYS));
if(i%(DAYS)) r++;

return(r);
}
