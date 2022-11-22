/* **** Notes

Convert into an ordinal number of the day of the week of the month from the time
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ord_di_wk(time_t(arg))) {
auto struct tm *tp;
auto time_t t;
auto signed r;
auto signed short flag;
auto signed days = (0x07);
if(!arg) return(0x00);
// time(&t);
t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);
AND(flag,0x00);
r = (R(tm_mday,*tp));
if(r%(days)) flag++;
r = (r/(days));
if(flag) r++;
return(r);
}
