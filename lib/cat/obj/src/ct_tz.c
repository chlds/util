/* **** Notes

Count

Remarks:
Advanced or delayed in increments of half an hour
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ct_tz(time_t(*di),time_t(*si))) {
if(!di) return(0x00);
if(!si) return(0x00);
if(!(0x00<(*si))) AND(*si,0x00);
return(ct_tz_yr(di,si));
}
