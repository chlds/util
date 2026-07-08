# define CAT_H
# define TIME_H
# include "./../../../config.h"

void*(__cdecl chronos_xe(signed(argt),time_t(*args),void(*argp))) {
auto signed(__cdecl*c)(struct tm(*args),const time_t(*argp));
c = (signed(__cdecl*)(struct tm*,const time_t*))(choosetime_xe(argt));
if(c((struct tm*)(argp),(time_t*)(args))) argp = (0x00);
return(argp);
}
