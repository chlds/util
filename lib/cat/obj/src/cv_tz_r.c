/* **** Notes

Convert
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_r(signed(arg),signed char(*sign),time_t(*argp))) {
auto signed char *b;
auto signed r;
auto time_t t;
auto time_t hr = (60*(60));
auto time_t mn = (60);
auto signed hrs = (24);
auto signed char *sepr = (":");
if(!argp) return(0x00);
b = (0x00);
if(!sign) {
cat_b(&b,"+00:00",(void*)0x00);
return(b);
}
t = (*argp);
t = (t/(hr));
r = (t%(hrs));
cat_b(&b,sign,*(r+(CAT_DIGIT)),(void*)0x00);
t = (*argp);
t = (t%(hr));
r = (t/(mn));
cat_b(&b,sepr,*(r+(CAT_DIGIT)),(void*)0x00);
return(b);
}
