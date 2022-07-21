/* **** Notes

Map the date

Remarks:
Call fn. rl later
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_map_date_b(signed(arg),signed char(**di),time_t(*si))) {
auto signed short *w;
auto signed r;
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
w = (0x00);
if(!(cal_map_date(arg,&w,si))) return(0x00);
r = cal_map_date_b_r(CAL_DATE,di,w);
rl(w);
w = (0x00);
return(r);
}
