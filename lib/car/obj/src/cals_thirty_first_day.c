/* **** Notes

On the thirty first day of the month.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_thirty_first_day(signed short(arg/* month */))) {

auto signed i,r;
auto signed short flag;
auto signed char mo[] = {
1,3,5,7,8,10,12,0x00,
};

if(arg<(0x00)) return(0x00);
if(!(arg<(MONTHS))) return(0x00);

arg++;
r = ord(mo,arg);
if(r<(ct(mo))) return(0x01);

return(0x00);
}
