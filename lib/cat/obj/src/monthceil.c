# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl monthceil(signed(args),time_t(argp))) {
if(!monthboundary(args,argp)) argp = onemonthlater(args,argp);
return(monthfloor(args,argp));
}
