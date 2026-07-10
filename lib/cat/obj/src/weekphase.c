# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl weekphase(time_t(argt),signed(args),signed(argp))) {
auto signed r;
AND(r,0x00);
ADD(r,civw(args,argt));
ADD(r,DAYSPERWEEK);
ADD(r,cii(argp%(DAYSPERWEEK)));
return(r%(DAYSPERWEEK));
}
