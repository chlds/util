# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_rr(time_t(*argp))) {
auto signed char *b;
auto signed r;
auto time_t te;
auto time_t mn = (60);
auto time_t hr = (60*(60));
auto signed char *sepr = (":");
if(!argp) return(0x00);
b = (0x00);
te = (*argp);
te = (te%(hr));
r = (signed)(te/(mn));
if(!r) return(b);
cat_b(&b,sepr,*(r+(CAT_DIGIT)),(void*)0x00);
return(b);
}
