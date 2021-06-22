/* **** Notes

Count weeks.
*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl ct_weeks_r(time_t(sec))) {

auto time_t t;

if(sec<(0x00)) return(0x00);

t = (60);
t = (60*(t));
t = (24*(t));
t = (7*(t));
sec = (sec+(0x01+(~t)));

return(0x01+(ct_weeks_r(sec)));
}
