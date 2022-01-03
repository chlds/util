/* **** Notes

Map the date.

Remarks:
Call fn. rl later.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl chrono_date(signed(arg),signed char(**di),time_t(*si))) {

auto signed char *b;
auto signed short *w;
auto time_t t;
auto signed r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);
if(*di) return(0x00);

w = (0x00);
r = cals_date(arg,&w,si);
if(!r) return(0x00);

r = chrono_date_r(CALS_DATE,di,w);
rl(w);
w = (0x00);

return(r);
}
