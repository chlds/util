# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl firstweek(signed(argt),signed(args),time_t(argp))) {
return(firstweekwhosestartingdayfallswithinthemonth(argt,args,argp));
}
