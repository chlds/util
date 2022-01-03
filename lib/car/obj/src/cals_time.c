/* **** Notes

Map the time.

Remarks:
Call fn. rl later.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_time(signed(arg),signed short(**di),time_t(*si))) {

auto signed short *w;
auto struct tm *tp;
auto time_t t;
auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);
if(*di) return(0x00);

tp = gmtime(si);
if(arg) tp = localtime(si);
if(!tp) return(0x00);

r = (CALS_TIME);
r++;
r = (r*(sizeof(*w)));
w = (signed short(*)) alloc(r);
if(!w) return(0x00);

*(CALS_TIME+(w)) = (0x00);
*(CALS_HR+(w)) = (R(tm_hour,*tp));
*(CALS_MN+(w)) = (R(tm_min,*tp));
*(CALS_SM+(w)) = (R(tm_sec,*tp));

*di = (w);
w = (0x00);

return(CALS_TIME);
}
