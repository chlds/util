# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl weekboundary(signed(argt),signed(args),time_t(argp))) {
if(weekphase(argt,args,argp)) return(0x00);
return(dayboundary(args,argp));
}
