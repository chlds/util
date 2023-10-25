# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_wk(signed(args),time_t(argp))) {
auto struct tm *t;
auto time_t te;
auto time_t wk;
auto time_t day = (60*(60*(24)));
auto time_t days = (0x07);
if(!(args<(days))) return(0x00);
if(args<(0x00)) return(0x00);
if(argp<(0x00)) return(0x00);
te = (argp);
t = localtime(&te);
if(DBG) t = gmtime(&te);
if(!t) return(0x00);
wk = (time_t)(R(tm_wday,*t));
wk = (wk+(days+(0x01+(~args))));
wk = (wk%(days));
wk = (day*(wk));
argp = (argp+(0x01+(~wk)));
if(argp<(0x00)) return(0x00);
return(argp);
}
