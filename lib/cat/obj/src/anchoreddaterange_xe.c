# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char **(__cdecl anchoreddaterange_xe(signed(argt),signed(args),time_t(argp))) {
auto signed char **b;
b = (0x00);
if(argp<(0x00)) return(b);
argp = weekfloor(argt,args,argp);
if(!(DAYSPERWEEK<(civi(args,argp)))) b = catnol_xxe(b,lunette(args,argp));
return(catnol_xxe(b,daterange_xe(argt,args,argp)));
}
