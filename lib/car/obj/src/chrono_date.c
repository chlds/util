/* **** Notes

Map the date.

Remarks:
Call fn. rl later.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl chrono_date(signed char(**argp),time_t(arg))) {

auto signed char *b;
auto signed short *w;
auto time_t t;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);
if(*argp) return(0x00);

// time(&t);
t = (arg);
w = (0x00);
r = cals_date(&w,t);
if(!r) return(0x00);

r = chrono_date_r(CALS_DATE,argp,w);
rl(w);
w = (0x00);

return(r);
}
