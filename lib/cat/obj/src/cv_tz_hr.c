# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_hr(signed(args/* scale */),time_t(*argp))) {
auto signed char *b;
auto signed r;
auto time_t te;
auto time_t hr = (60*(60));
auto time_t hrs = (24);
auto signed scale = (0x01);
b = (0x00);
if(args<(0x00)) args = (0x01+(~args));
if(!args) args = (scale);
if(!argp) return(b);
te = (*argp);
if(te<(0x00)) te = (0x01+(~te));
te = (te/(hr));
r = (signed)(te%(args*(hrs)));
if(!r) return(b);
return(cath(*(r+(CAT_DIGIT)),(void*)(0x00)));
}
