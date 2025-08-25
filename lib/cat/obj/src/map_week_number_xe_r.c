# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl map_week_number_xe_r(signed(arg),signed char(*argp),time_t(*criterion))) {
auto signed char *b;
auto signed char *w;
auto signed r;
auto time_t e;
auto signed digit = (0x02);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!criterion) return(0x00);
e = (*criterion);
r = ct_wk(arg,&e);
if(!r) return(0x00);
w = cv(digit,r);
e = cvyr_wknum(e,r);
*criterion = (e);
b = map_week_number_xe_rr(w,argp,criterion);
rl(w);
w = (0x00);
return(b);
}
