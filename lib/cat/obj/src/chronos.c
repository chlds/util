# define CAT_H
# define TIME_H
# include "./../../../config.h"

void*(__cdecl chronos(signed(args),void(*argp))) {
auto struct tm*(__cdecl*c)(const time_t(*argp));
c = (struct tm*(__cdecl*)(const time_t*))(choosetime(args));
return(c(argp));
}
