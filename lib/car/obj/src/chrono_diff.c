/* **** Notes

Map difference with the Greenwich Mean time.

Remarks:
Call fn. rl later.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl chrono_diff(signed char(**di),time_t(*si))) {

auto signed char *b;
auto struct tm *tp;
auto time_t t;
auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);
if(*di) return(0x00);

t = (0x00);
r = diff_gmt(&t,si);
if(!r) return(0x00);

b = (0x00);
r = chrono_diff_r(&b,&t);
if(!r) {
embed(0x00,b);
rl(b);
b = (0x00);
}

*di = (b);
b = (0x00);

return(r);
}
