# define CAR_H
# include "./../../../config.h"

signed(__cdecl cf_meridiem_rr(signed char(*argp))) {
if(cf_pm(argp)) return(0x02);
return(0x00);
}
