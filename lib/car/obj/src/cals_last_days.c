/* **** Notes

Last days of the month
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_last_days(time_t(arg))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

mo = (R(tm_mon,*tp));
t = (t+(DAYS*(24*(60*(60)))));
tp = localtime(&t);
if(!tp) return(0x00);

if(!(mo^(R(tm_mon,*tp)))) return(0x00);

return(0x01);
}
