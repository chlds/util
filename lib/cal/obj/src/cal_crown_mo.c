/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_mo(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed r;
auto signed short mo;
auto time_t t;
if(!(arg<(0x0C))) return(0x00);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);
mo = (R(tm_mon,*tp));
mo = (arg+(0x01+(~mo)));
r = cal_crown_mo_r(mo,&t);
if(!t) return(0x00);
*argp = (t);
return(r);
}
