# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl civilyear(signed(args),time_t(argp))) {
auto struct tm *e;
if(argp<(0x00)) return(~0x00);
e = (struct tm*)(chronos(args,&argp));
if(!e) return(~0x00);
return(R(tm_year,*e));
}
