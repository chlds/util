# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl aetherdayoftheweek(void(*argp))) {
auto struct tm *e;
if(!argp) return(0x00);
e = (struct tm *)(argp);
return(R(tm_wday,*e));
}
