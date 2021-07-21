/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_crown_midnight(time_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short hr,mn,sm;
auto signed short flag;

if(!argp) return(0x00);

t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);

hr = (R(tm_hour,*tp));
mn = (R(tm_min,*tp));
sm = (R(tm_sec,*tp));

t = (t+(0x01+(~(sm+(60*(mn+(60*(hr))))))));
*argp = (t);

return(0x01);
}
