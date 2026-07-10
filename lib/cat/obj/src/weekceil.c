# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl weekceil(signed(argt),signed(args),time_t(argp))) {
if(!weekboundary(argt,args,argp)) argp = oneweeklater(argp);
return(weekfloor(argt,args,argp));
}
