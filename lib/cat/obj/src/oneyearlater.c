# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl oneyearlater(signed(args),time_t(argp))) {
auto signed r;
if(argp<(0x00)) return(0x00);
r = civi(args,argp);
argp = oneyearlater_r(args,argp);
if(!(EQ(r,civi(args,argp)))) argp = onedayago(argp);
return(argp);
}
