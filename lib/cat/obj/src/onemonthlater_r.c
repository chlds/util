# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl onemonthlater_r(time_t(argt),signed(args),signed(argp))) {
argt = onedaylater(argt);
if(!(EQ(argp,civl(args,argt)))) return(argt);
return(onemonthlater_r(argt,args,argp));
}
