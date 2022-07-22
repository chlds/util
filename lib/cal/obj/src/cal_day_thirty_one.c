/* **** Notes

On the thirty first day of the month
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_day_thirty_one(signed short(arg/* month */))) {
auto signed r;
auto signed char mo[] = {
1,3,5,7,8,10,12,0x00,
};
if(arg<(0x00)) return(0x00);
if(!(arg<(0x0C))) return(0x00);
arg++;
r = ord(mo,arg);
if(r<(ct(mo))) return(0x01);
return(0x00);
}
