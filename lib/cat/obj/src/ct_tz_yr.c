/* **** Notes

Count
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ct_tz_yr(time_t(*di),time_t(*si))) {
auto struct tm *tp;
auto signed yr;
auto signed hr;
auto signed mn;
auto signed sm;
auto time_t t;
auto time_t e;
auto signed epoch = (1900);
auto time_t day = (24*(60*(60)));
// auto time_t noon = (12*(60*(60)));
if(!di) return(0x00);
if(!si) return(0x00);
// time(&t);
t = (*si);
tp = gmtime(&t);
if(!tp) return(0x00);
yr = (epoch+(R(tm_year,*tp)));
hr = (R(tm_hour,*tp));
mn = (R(tm_min,*tp));
sm = (R(tm_sec,*tp));
e = (t);
tp = localtime(&e);
if(DBG) {
e = (CAT_DEBUG_MN+(CAT_DEBUG_HR));
e = (e%(day));
t = (e+(t));
tp = gmtime(&t);
}
if(!tp) return(0x00);
if(!(EQ(yr,epoch+(R(tm_year,*tp))))) {
t = (sm+(60*(mn+(60*(hr)))));
e = (60*(R(tm_hour,*tp)));
e = (60*(e+(R(tm_min,*tp))));
e = (e+(R(tm_sec,*tp)));
if(yr<(epoch+(R(tm_year,*tp)))) e = (day+(e));
else t = (day+(t));
*di = (e+(0x01+(~t)));
return(0x01);
}
return(ct_tz_mo(di,si));
}
