/* **** Notes

Convert to time out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_hr_light_rr(signed short(*hr),signed char(*argp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed radix = (0x0A);

if(!hr) return(0x00);
if(!argp) return(0x00);

v = (0x00);
b = (argp);
r = cv_argt(&v,b);
if(!r) return(0x00);

AND(flag,0x00);
b = (*(--r+(v)));
if(ct_digits(b)) {
if(cv_da(radix,&r,b)) {
OR(flag,0x01);
*hr = (r);
}}

rl_v(&v);
if(!flag) return(0x00);

return(0x01);
}
