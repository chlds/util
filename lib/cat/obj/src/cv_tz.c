/* **** Notes

Convert

Remarks:
Call fn. rl later
*/


# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz(time_t(*argp))) {
auto signed char *b;
auto signed char *p;
auto signed r;
auto time_t t;
auto time_t tt;
auto time_t mn = (60);
auto time_t hr = (60*(60));
auto time_t hrs = (24);
auto time_t scale = (2);
auto signed char *sepr = (":");
auto signed char *neg = ("-");
auto signed char *pos = ("+");
if(!argp) return(0x00);
b = (0x00);
tt = (*argp);
if(!tt) {
cat_b(&b,"+00:00",(void*)0x00);
return(b);
}
p = (pos);
if(tt<(0x00)) {
tt = (0x01+(~tt));
p = (neg);
}
t = (tt);
t = (t/(hr));
r = (signed) (t%(scale*(hrs)));
cat_b(&b,p,*(r+(CAT_DIGIT)),(void*)0x00);
t = (tt);
t = (t%(hr));
r = (signed) (t/(mn));
cat_b(&b,sepr,*(r+(CAT_DIGIT)),(void*)0x00);
return(b);
}
