# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl onemonthlater(signed(args),time_t(argp))) {
auto signed r;
if(argp<(0x00)) return(0x00);
r = civi(args,argp);
argp = onemonthlater_r(argp,args,civl(args,argp));
argp = (argp+(spd(dec(r))));
if(EQ(r,civi(args,argp))) return(argp);
return(attheendoflastmonth(args,argp));
}
