/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_wk_periodic_rrr(signed(ordinary),signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed r;
auto signed short mo;
auto time_t t;
auto signed days = (0x07);
if(!argp) return(0x00);
if(!(--ordinary)) return(0x00);
tp = localtime(argp);
if(!tp) {
*argp = (0x00);
return(0x00);
}
mo = (R(tm_mon,*tp));
t = (days*(24*(60*(60))));
t = (t+(*argp));
r = cal_by_mo(mo,t);
if(EQ(r,~0x00)) {
*argp = (0x00);
return(0x00);
}
if(r) return(0x00);
*argp = (t);
if(t<(0x00)) {
*argp = (0x00);
return(0x00);
}
return(days+(cal_crown_wk_periodic_rrr(ordinary,arg,argp)));
}
