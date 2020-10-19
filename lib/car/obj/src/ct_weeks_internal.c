/* **** Notes

Count weeks.
*/


# define CAR

# include "../../../incl/config.h"
# include <time.h>

signed(__cdecl ct_weeks_internal(signed(sec_in_week),time_t(sec))) {

/* **** CODE/TEXT */
if(sec_in_week<(0x00)) return(0x00);

sec = (-sec_in_week+(sec));
if(sec<(0x00)) return(0x01);

return(0x01+(ct_weeks_internal(sec_in_week,sec)));
}
