/* **** Notes

Convert to time out of characters
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_hr_noon(signed short(*hr),signed char(*argp))) {
auto signed char **v;
auto signed char *b;
auto signed r;
if(!hr) return(0x00);
if(!argp) return(0x00);
v = (0x00);
b = (argp);
r = cv_argt(&v,b);
if(!r) return(0x00);
b = (*(--r+(v)));
r = cv_hr_noon_r(hr,b);
rl_v(&v);
return(r);
}
