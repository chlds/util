# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_rr(time_t(*argp))) {
return(cv_tz_rrr(argp,cv_tz_hr(CAT_SCALE,argp)));
}
