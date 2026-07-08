# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl civildayoftheweek_xe(signed(args),time_t(*argp))) {
auto struct tm *e;
auto struct tm t;
if(!argp) return(~0x00);
e = (struct tm*)(chronos_xe(args,argp,&t));
if(!e) return(~0x00);
return(R(tm_wday,*e));
}
