# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl weekphase(signed(argt),signed(args),time_t(argp))) {
auto signed r;
AND(r,0x00);
ADD(r,civw(args,argp));
ADD(r,DAYSPERWEEK);
ADD(r,cii(argt%(DAYSPERWEEK)));
return(r%(DAYSPERWEEK));
}
