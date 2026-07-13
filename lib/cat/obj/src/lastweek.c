# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl lastweek(signed(argt),signed(args),time_t(argp))) {
return(lastweekwhosestartingdayfallswithinthemonth(argt,args,argp));
}
