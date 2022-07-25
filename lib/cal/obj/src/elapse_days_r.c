/* **** Notes

Return days elapsed since a first day of the week
*/


# define CAL_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl elapse_days_r(signed short(wk),time_t(*argp))) {
auto struct tm *tp;
auto signed r;
auto time_t t;
if(!argp) return(~0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) {
*argp = (~0x00);
return(0x00);
}
if(!(wk^(R(tm_wday,*tp)))) return(0x00);
// search back
t = (0x01+(~(24*(60*(60)))));
*argp = (t+(*argp));
return(0x01+(elapse_days_r(wk,argp)));
}
