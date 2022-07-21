/* **** Notes

Map the time

Remarks:
Call fn. rl later
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_map_time(signed(arg),signed short(**di),time_t(*si))) {
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
OR(r,CAL_TIME);
r++;
r = (r*(sizeof(*w)));
w = (signed short(*)) alloc(r);
*di = (w);
if(!w) return(0x00);
*(CAL_TIME+(w)) = (0x00);
*(CAL_HR+(w)) = (R(tm_hour,*tp));
*(CAL_MN+(w)) = (R(tm_min,*tp));
*(CAL_SM+(w)) = (R(tm_sec,*tp));
*(CAL_MS+(w)) = (0x00);
w = (0x00);
return(CAL_TIME);
}
