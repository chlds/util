# define CAT_H
# define TIME_H
# include "./../../../config.h"

void*(__cdecl ananke(signed(argt),time_t(*args),void(*argp))) {
if(CRT_MSVC) return(chronos_xe(argt,args,argp));
return(chronos(argt,args));
}
