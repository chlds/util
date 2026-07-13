# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl lastweekwhosestartingdayfallswithinthemonth(signed(argt),signed(args),time_t(argp))) {
if(argp<(0x00)) return(0x00);
return(oneweekago(firstweekwhosestartingdayfallswithinthemonth(argt,args,onemonthlater(args,argp))));
}
