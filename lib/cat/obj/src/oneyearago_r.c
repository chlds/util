# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl oneyearago_r(signed(args),time_t(argp))) {
auto signed r;
if(argp<(0x00)) return(0x00);
r = civl(args,argp);
if(FEBRUARY<(r)) {
if(leapyear(civy(args,argp))) argp = onedayago(argp);
}
argp = (argp+(cii_te(spa(1))));
if(!(FEBRUARY<(r))) {
if(leapyear(civy(args,argp))) argp = onedayago(argp);
}
return(argp);
}
