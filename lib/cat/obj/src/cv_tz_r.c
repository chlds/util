# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_r(time_t(*argp))) {
auto signed char *b;
auto signed char *p;
auto signed r;
auto time_t te;
auto time_t hr = (60*(60));
auto time_t hrs = (24);
auto time_t scale = (2);
auto signed char *neg = ("-");
auto signed char *pos = ("+");
if(!argp) return(0x00);
b = (0x00);
p = (pos);
te = (*argp);
// if(!te) p = (pos);
if(te<(0x00)) {
te = (0x01+(~te));
p = (neg);
}
b = cv_tz_rr(&te);
te = (te/(hr));
r = (signed)(te%(scale*(hrs)));
cat_ahead_b(&b,*(r+(CAT_DIGIT)),p,(void*)0x00);
return(b);
}
