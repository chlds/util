# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl aethersecond(void(*argp))) {
auto struct tm *e;
if(!argp) return(0x00);
e = (struct tm *)(argp);
return(R(tm_sec,*e));
}
