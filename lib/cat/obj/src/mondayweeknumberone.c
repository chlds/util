# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl mondayweeknumberone(signed(args),time_t(argp))) {
if(argp<(0x00)) return(0x00);
argp = firstweek(MONDAY,args,yearfloor(args,argp));
if(4<(civi(args,argp))) argp = oneweekago(argp);
return(argp);
}
