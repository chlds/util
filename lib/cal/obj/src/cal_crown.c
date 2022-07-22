/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown(signed short(mo),signed short(yr),time_t(*argp))) {
auto struct tm *tp;
auto signed r;
auto signed short di;
auto time_t t;
if(!argp) return(0x00);
*argp = (0x00);
r = cal_crown_yr(yr,argp);
// if(!r) return(0x00);
r = cal_crown_mo(mo,argp);
// if(!r) return(0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);
di = (R(tm_mday,*tp));
--di;
if(di) {
t = (di*(24*(60*(60))));
t = (0x01+(~t));
*argp = (t+(*argp));
}
r = cal_crown_midnight(argp);
if(!r) return(0x00);
t = (*argp);
if(t<(0x00)) *argp = (0x00);
return(0x01);
}
