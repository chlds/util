/* **** Notes

Overwrite time

Remarks:
Keep running
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_day_one(time_t(*argp))) {
auto struct tm *tp;
auto signed short di;
auto time_t t;
if(!argp) return(0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);
di = (R(tm_mday,*tp));
--di;
if(di) {
t = (di*(24*(60*(60))));
t = (0x01+(~t));
t = (t+(*argp));
}
if(t<(0x00)) {
t = (0x00);
// return(0x00);
}
*argp = (t);
return(0x01);
}
