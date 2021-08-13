/* **** Notes

Confirm.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_know_date(signed short(di),signed short(mo),signed short(yr))) {

auto signed short ad_h = (2100);
auto signed short ad_l = (1970);
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short day;
auto signed short flag;

if(di<(0x01)) return(0x00);
if(31<(di)) return(0x00);
if(mo<(0x00)) return(0x00);
if(!(mo<(MONTHS))) return(0x00);
if(yr<(ad_l)) return(0x00);
if(ad_h<(yr)) return(0x00);

mo++;
if(!(mo^(MONTHS))) {
AND(mo,0x00);
INC(yr);
}

r = cals_crown(mo,yr,&t);
if(!r) return(0x00);

r = cals_crown_midnight(&t);
if(!r) return(0x00);

t = (t+(0x01+(~(24*(60*(60))))));
tp = localtime(&t);
if(!tp) return(0x00);

day = (R(tm_mday,*tp));
if(!(day<(di))) return(0x01);

return(0x00);
}
