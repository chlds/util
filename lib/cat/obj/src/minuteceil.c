# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl minuteceil(signed(args),time_t(argp))) {
if(!minuteboundary(args,argp)) argp = oneminutelater(argp);
return(minutefloor(args,argp));
}
