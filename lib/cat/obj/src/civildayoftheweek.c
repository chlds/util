# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl civildayoftheweek(signed(args),time_t(*argp))) {
auto struct tm *e;
if(!argp) return(~0x00);
e = (struct tm*)(chronos(args,argp));
if(!e) return(~0x00);
return(R(tm_wday,*e));
}
