/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_mo_r(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed short mo;
auto time_t t;
auto signed weeks = (5);
auto signed days = (7);
if(!argp) return(~0x00);
if(!(cal_crown_day_one(argp))) {
*argp = (~0x00);
return(0x00);
}
t = (*argp);
tp = localtime(&t);
if(!tp) {
*argp = (~0x00);
return(0x00);
}
mo = (R(tm_mon,*tp));
if(EQ(arg,mo)) return(0x00);
mo = (arg+(0x01+(~mo)));
t = (24*(60*(60)));
if(mo<(0x00)) t = (0x01+(~t));
else t = (weeks*(days*(t)));
*argp = (t+(*argp));
return(0x01+(cal_crown_mo_r(arg,argp)));
}
