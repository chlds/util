/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_yr_r(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed weeks;
auto signed short mo;
auto time_t t;
auto signed short dec = (0x0B);
auto signed short jan = (0x00);
auto signed days = (0x07);
if(!argp) return(0x00);
if(!arg) return(0x01);
t = (*argp);
tp = localtime(&t);
if(!tp) {
*argp = (0x00);
return(0x00);
}
mo = (R(tm_mon,*tp));
weeks = (53);
if(!(jan^(mo))) {
if(arg<(0x00)) weeks = (52);
}
if(!(dec^(mo))) {
if(!(arg<(0x00))) weeks = (52);
}
t = (weeks*(days*(24*(60*(60)))));
if(arg<(0x00)) t = (0x01+(~t));
*argp = (t+(*argp));
if(arg<(0x00)) arg++;
else --arg;
return(0x01+(cal_crown_yr_r(arg,argp)));
}
