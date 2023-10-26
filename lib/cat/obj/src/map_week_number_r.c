# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl map_week_number_r(signed(arg),signed char(*argp),time_t(*criterion))) {
auto signed char *b;
auto signed char *w;
auto signed r;
auto time_t t;
auto signed days = (0x07);
auto signed digit = (0x02);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!criterion) return(0x00);
// time(&t);
t = (*criterion);
r = ct_wk(arg,&t);
if(!r) return(0x00);
w = cv(digit,r);
if(EQ(0x01,r)) t = (t+(days*(24*(60*(60)))));
if(!(r<(51))) t = (t+(0x01+(~(days*(24*(60*(60)))))));
*criterion = (t);
b = map_week_number_rr(w,argp,criterion);
rl(w);
w = (0x00);
return(b);
}
