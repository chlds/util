/* **** Notes

Map the date

Remarks:
Call fn. rl later
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_map_date(signed(arg),signed short(**di),time_t(*si))) {
auto signed short *w;
auto struct tm *tp;
auto signed r;
auto time_t t;
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
tp = gmtime(si);
if(arg) tp = localtime(si);
if(!tp) return(0x00);
AND(r,0x00);
OR(r,CAL_DATE);
r++;
r = (r*(sizeof(*w)));
w = (signed short(*)) alloc(r);
*di = (w);
if(!w) return(0x00);
*(CAL_DATE+(w)) = (0x00);
*(CAL_YR+(w)) = (1900+(R(tm_year,*tp)));
*(CAL_MO+(w)) = (R(tm_mon,*tp));
*(CAL_DI+(w)) = (R(tm_mday,*tp));
*(CAL_WK+(w)) = (R(tm_wday,*tp));
w = (0x00);
return(CAL_DATE);
}
