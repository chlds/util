# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl yearceil(signed(args),time_t(argp))) {
if(!yearboundary(args,argp)) argp = oneyearlater(args,argp);
return(yearfloor(args,argp));
}
