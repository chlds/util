/* **** Notes

Count weeks.
*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl ct_weeks(time_t(criterion),time_t(sec))) {

auto time_t t;
auto signed i,r;

if(criterion<(0x00)) return(0x00);
if(sec<(0x00)) return(0x00);

sec = (sec+(0x01+(~criterion)));
if(sec<(0x00)) return(0x01);

t = (60);
t = (60*(t));
t = (24*(t));
t = (7*(t));
t = (53*(t));
if(t<(sec)) return(0x00);

return(ct_weeks_internal(sec));
}
