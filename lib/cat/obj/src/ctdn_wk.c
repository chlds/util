/* **** Notes

Return days elapsed since a first day of the week.

Remarks:
Return (~0x00) on failure.
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ctdn_wk(signed short(wk),time_t(arg))) {

auto struct tm *tp;
auto time_t t;
auto signed r;
auto signed days = (0x07);

if(wk<(0x00)) return(~0x00);
if(0x06<(wk)) return(~0x00);
if(arg<(0x00)) return(~0x00);

t = (arg);
tp = localtime(&t);
if(!tp) return(~0x00);

r = (days+(0x01+(~wk)));
r = (r+(R(tm_wday,*tp)));
r = (r%(days));

return(r);
}
