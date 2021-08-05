/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_crown_yr_r(signed short(arg),time_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short mo,yr;
auto signed short weeks;
auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);

weeks = (53);

t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);

mo = (R(tm_mon,*tp));
if(!(JANUARY^(mo))) {
if(arg<(0x00)) weeks = (52);
}
if(!(DECEMBER^(mo))) {
if(!(arg<(0x00))) weeks = (52);
}

t = (weeks*(DAYS*(24*(60*(60)))));
if(arg<(0x00)) t = (0x01+(~t));
*argp = (t+(*argp));

if(arg<(0x00)) arg++;
else --arg;

return(0x01+(cals_crown_yr_r(arg,argp)));
}
