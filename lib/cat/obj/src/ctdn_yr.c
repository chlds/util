/* **** Notes

Return the number of weeks to the first day of weeks in the new year based on the time.

Remarks:
Refer at fn. ctdn_wk and ord_di_wk.
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ctdn_yr(time_t(arg))) {

auto struct tm *tp;
auto time_t t;
auto signed r;
auto signed short mo;
auto signed days = (0x07);

if(arg<(0x00)) return(~0x00);

r = ord_di_wk(arg);
if(!r) return(~0x00);

t = (arg);
tp = localtime(&t);
if(!tp) return(~0x00);

mo = (R(tm_mon,*tp));
if(!mo) return(--r);

t = (0x01+(~(r*(days*(24*(60*(60)))))));
arg = (arg+(t));

return(r+(ctdn_yr(arg)));
}
