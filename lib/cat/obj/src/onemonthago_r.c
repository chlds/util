# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl onemonthago_r(time_t(argt),signed(args),signed(argp))) {
argt = onedayago(argt);
if(!(EQ(argp,civl(args,argt)))) return(argt);
return(onemonthago_r(argt,args,argp));
}
