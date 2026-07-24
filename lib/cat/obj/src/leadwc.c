# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl leadwc(signed(argt),signed(args),time_t(argp))) {
if(argp<(0x00)) return(0x00);
argp = monthfloor(args,argp);
argt = (DAYSPERWEEK+(cii(weekphase(argp,args,argt))));
return(argp+(spd(argt%(DAYSPERWEEK))));
}
