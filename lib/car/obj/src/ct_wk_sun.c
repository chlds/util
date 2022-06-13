/* **** Notes

Return the calendar week.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CAR
# define CALEND
// # include <time.h>
# include "../../../incl/config.h"

signed(__cdecl ct_wk_sun(time_t(arg))) {

auto struct tm *tp;
auto time_t t;
auto signed r;
auto signed short mo;
auto signed short di;
auto signed short wk;
auto signed dec = (0x0B);
auto signed jan = (0x00);
auto signed days = (0x07);

if(arg<(0x00)) return(0x00);

AND(wk,0x00);
r = ctdn_wk(wk,arg);
if(EQ(r,~0x00)) return(0x00);

t = (r*(24*(60*(60))));
t = (arg+(0x01+(~t)));
tp = localtime(&t);
if(!tp) return(0x00);

di = (R(tm_mday,*tp));
mo = (R(tm_mon,*tp));
if(EQ(jan,mo)) {
if(!(0x01<(di))) return(0x01);
}
if(EQ(dec,mo)) {
if(25<(di)) return(0x01);
}

return(ct_wk_sun_r(t));
}
