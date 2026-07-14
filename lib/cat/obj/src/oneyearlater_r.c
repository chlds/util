# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl oneyearlater_r(signed(args),time_t(argp))) {
auto signed r;
if(argp<(0x00)) return(0x00);
r = civl(args,argp);
if(!(FEBRUARY<(r))) {
if(leapyear(civy(args,argp))) argp = onedaylater(argp);
}
argp = (argp+(spa(1)));
if(FEBRUARY<(r)) {
if(leapyear(civy(args,argp))) argp = onedaylater(argp);
}
return(argp);
}
