/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_crown(signed short(mo),signed short(yr),time_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short di;
auto signed short flag;

if(!argp) return(0x00);

*argp = (0x00);
r = cals_crown_yr(yr,argp);
// if(!r) return(0x00);

r = cals_crown_mo(mo,argp);
// if(!r) return(0x00);

t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);

di = (R(tm_mday,*tp));
--di;
if(di) {
t = (di*(24*(60*(60))));
t = (0x01+(~t));
*argp = (t+(*argp));
}

r = cals_crown_midnight(argp);
if(!r) return(0x00);

t = (*argp);
if(t<(0x00)) *argp = (0x00);

return(0x01);
}
