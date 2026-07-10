# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl hourceil(signed(args),time_t(argp))) {
if(!hourboundary(args,argp)) argp = onehourlater(argp);
return(hourfloor(args,argp));
}
