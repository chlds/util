# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl afewdaysago(signed(argt),signed(args),time_t(argp))) {
if(argp<(0x00)) return(0x00);
if(EQ(argt,civi(args,argp))) return(argp);
return(afewdaysago(argt,args,onedayago(argp)));
}
