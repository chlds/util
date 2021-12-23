/* **** Notes

Map the date.

Remarks:
Call fn. rl later.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_date(signed short(**argp),time_t(arg))) {

auto signed short *w;
auto struct tm *tp;
auto time_t t;
auto signed i,r;

if(!argp) return(0x00);
if(*argp) return(0x00);

// time(&t);
t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

r = (CALS_DATE);
r++;
r = (r*(sizeof(*w)));
w = (signed short(*)) alloc(r);
if(!w) return(0x00);

*(CALS_DATE+(w)) = (0x00);
*(CALS_YR+(w)) = (1900+(R(tm_year,*tp)));
*(CALS_MO+(w)) = (R(tm_mon,*tp));
*(CALS_DI+(w)) = (R(tm_mday,*tp));
*(CALS_WK+(w)) = (R(tm_wday,*tp));

*argp = (w);
w = (0x00);

return(CALS_DATE);
}
