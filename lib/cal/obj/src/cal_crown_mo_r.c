/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_mo_r(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed weeks;
auto signed short di;
auto time_t t;
auto signed days = (0x07);
if(!arg) return(0x00);
if(!argp) return(0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);
di = (R(tm_mday,*tp));
weeks = (0x04);
if(!(di<(weeks*(days)))) {
if(arg<(0x00)) weeks = (0x05);
}
if(di<(days)) {
if(!(arg<(0x00))) weeks = (0x05);
}
t = (weeks*(days*(24*(60*(60)))));
if(arg<(0x00)) t = (0x01+(~t));
*argp = (t+(*argp));
if(arg<(0x00)) arg++;
else --arg;
return(0x01+(cal_crown_mo_r(arg,argp)));
}
