# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_rrr(time_t(*args),signed char(*argp))) {
auto signed char *b;
auto time_t te;
auto signed char p[] = (":");
auto signed char e[] = ("0");
auto signed char a[] = ("00");
if(!args) return(argp);
te = (*args);
if(te<(0x00)) te = (0x01+(~te));
b = cv_tz_mn(CAT_SCALE,&te);
if(!b) return(argp);
if(!argp) argp = cathy(a);
if(EQ(0x01,ct(argp))) argp = catha(e,argp);
return(catne(b,catna(p,argp)));
}
