/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_crown_yr(signed short(arg),time_t(*argp))) {

auto signed ad_h = (2100);
auto signed ad_l = (1970);
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short mo,yr;
auto signed short flag;

if(!(arg<(ad_h))) arg = (ad_h);
if(arg<(ad_l)) arg = (ad_l);
if(!argp) return(0x00);

t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);

yr = (1900+(R(tm_year,*tp)));
yr = (arg+(0x01+(~yr)));

return(cals_crown_yr_r(yr,argp));
}
