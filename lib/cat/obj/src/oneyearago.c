# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl oneyearago(signed(args),time_t(argp))) {
auto signed r;
if(argp<(0x00)) return(0x00);
r = civi(args,argp);
argp = oneyearago_r(args,argp);
if(!(EQ(r,civi(args,argp)))) argp = onedayago(argp);
return(argp);
}
