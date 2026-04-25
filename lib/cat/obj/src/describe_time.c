# define CAT_H
# define TIME_H
# include "./../../../config.h"

void*(__cdecl describe_time(void(*args),signed(argp))) {
auto struct tm*(__cdecl*c)(const time_t(*argp));
c = (struct tm*(__cdecl*)(const time_t*))(choose_time(argp));
return(c(args));
}
