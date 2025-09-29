# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_mn(signed(args/* scale */),time_t(*argp))) {
auto signed char *b;
auto signed r;
auto time_t te;
auto time_t mn = (60);
auto time_t hr = (60*(60));
auto signed scale = (0x01);
auto signed char a[] = ("0");
b = (0x00);
if(args<(0x00)) args = (0x01+(~args));
if(!args) args = (scale);
if(!argp) return(b);
te = (*argp);
if(te<(0x00)) te = (0x01+(~te));
te = (te%(hr));
r = (signed)(te/(mn));
if(!r) return(b);
b = cathy(*(r+(CAT_DIGIT)));
if(EQ(0x01,ct(b))) b = catha(a,b);
return(b);
}
