/* **** Notes

Return the calendar week.
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ct_wk_mon_r(time_t(arg))) {

auto struct tm *tp;
auto time_t t;
auto signed r;
auto signed short di;
auto signed days = (0x07);

if(arg<(0x00)) return(0x00);

r = ctdn_yr(arg);
if(EQ(r,~0x00)) return(0x00);

t = (r*(days*(24*(60*(60)))));
t = (arg+(0x01+(~t)));
tp = localtime(&t);
if(!tp) return(0x00);

di = (R(tm_mday,*tp));
if(!(0x04<(di))) return(0x01+(r));

return(0x02+(r));
}
