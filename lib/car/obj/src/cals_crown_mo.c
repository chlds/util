/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_crown_mo(signed short(arg),time_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short mo,yr;
auto signed short flag;

if(!(arg<(MONTHS))) return(0x00);
if(arg<(JANUARY)) return(0x00);
if(!argp) return(0x00);

t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);

mo = (R(tm_mon,*tp));
mo = (arg+(0x01+(~mo)));

return(cals_crown_mo_r(mo,argp));
}
