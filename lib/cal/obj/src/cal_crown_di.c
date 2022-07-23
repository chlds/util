/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_di(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed short di;
auto time_t t;
if(!(arg<(0x01+(31)))) return(0x00);
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(cal_crown_day_one(argp))) return(0x00);
t = (0x00);
--arg;
if(arg) t = (arg*(24*(60*(60))));
arg++;
t = (t+(*argp));
tp = localtime(&t);
if(!tp) return(0x00);
di = (R(tm_mday,*tp));
if(!(EQ(arg,di))) return(0x00);
*argp = (t);
return(0x01);
}
