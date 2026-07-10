# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl dayceil(signed(args),time_t(argp))) {
if(!dayboundary(args,argp)) argp = onedaylater(argp);
return(dayfloor(args,argp));
}
