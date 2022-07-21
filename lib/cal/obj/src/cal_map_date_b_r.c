/* **** Notes

Map the date

Remarks:
Call fn. rl later
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_map_date_b_r(signed(arg),signed char(**di),signed short(*si))) {
auto signed char *b;
auto signed short flag;
auto signed char *(cal_wk[]) = {
"Sun","Mon","Tue","Wed","Thu","Fri","Sat",0x00,
};
auto signed char *(cal_mo[]) = {
"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec",0x00,
};
if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
AND(flag,0x00);
--arg;
if(EQ(CAL_YR,arg)) OR(flag,0x01);
if(EQ(CAL_DI,arg)) OR(flag,0x01);
if(EQ(CAL_MO,arg)) {
if(!(concatenate(0x00,di,*(cal_mo+(*(arg+(si))))))) return(0x00);
}
if(EQ(CAL_WK,arg)) {
if(!(concatenate(0x00,di,*(cal_wk+(*(arg+(si))))))) return(0x00);
}
if(flag) {
AND(flag,0x00);
b = (0x00);
if(!(cv_d(0x0A,&b,*(arg+(si))))) return(0x00);
if(!(concatenate(0x00,di,b))) OR(flag,0x01);
rl(b);
b = (0x00);
}
if(flag) return(0x00);
if(arg) {
if(!(concatenate(0x00,di," "))) return(0x00);
}
return(0x01+(cal_map_date_b_r(arg,di,si)));
}
