# define CAR_H
# include "./../../../config.h"

signed(__cdecl cf_meridiem_r(signed char(*argp))) {
if(cf_am(argp)) return(0x01);
return(cf_meridiem_rr(argp));
}
