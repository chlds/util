/* **** Notes

Map the time

Remarks:
Call fn. rl later
Except for CAL_MS
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_map_time_b_r(signed(arg),signed char(**di),signed short(*si))) {
auto signed char *b;
auto signed short flag;
auto signed char *colon = (":");
auto signed char *p = ("0");
if(arg<(CAL_MN)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
AND(flag,0x00);
b = (0x00);
if(!(cv_d(0x0A,&b,*(--arg+(si))))) return(0x00);
if(!(0x01<(ct(b)))) {
if(!(concat_bb(di,p))) OR(flag,0x01);
}
if(!(concat_bb(di,b))) OR(flag,0x01);
rl(b);
b = (0x00);
if(flag) return(0x00);
if(CAL_SM<(arg)) {
if(!(concat_bb(di,colon))) return(0x00);
}
return(0x01+(cal_map_time_b_r(arg,di,si)));
}
