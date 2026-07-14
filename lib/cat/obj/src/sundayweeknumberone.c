# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl sundayweeknumberone(signed(args),time_t(argp))) {
if(argp<(0x00)) return(0x00);
argp = firstweek(SUNDAY,args,yearfloor(args,argp));
if(1<(civi(args,argp))) argp = oneweekago(argp);
return(argp);
}
