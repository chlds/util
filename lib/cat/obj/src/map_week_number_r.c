# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl map_week_number_r(signed(arg),signed char(*argp),time_t(*criterion))) {
auto signed char *b;
auto signed char *w;
auto signed r;
auto time_t te;
auto signed digit = (0x02);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!criterion) return(0x00);
// time(&te);
te = (*criterion);
r = ct_wk(arg,&te);
if(!r) return(0x00);
w = cv(digit,r);
te = cvyr_wknum(te,r);
*criterion = (te);
b = map_week_number_rr(w,argp,criterion);
rl(w);
w = (0x00);
return(b);
}
