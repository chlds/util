/* **** Notes

Clock
*/


# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl map_week_number_rr(signed char(*cw),signed char(*argp),time_t(*criterion))) {
auto signed char *b;
auto struct tm *tp;
auto signed r;
auto time_t t;
auto signed epoch = (1900);
auto signed char *sepr = ("-W");
if(!cw) return(0x00);
if(!argp) return(0x00);
if(!criterion) return(0x00);
t = (*criterion);
tp = localtime(&t);
if(!tp) return(0x00);
r = (epoch+(R(tm_year,*tp)));
b = cv(0x00,r);
if(!b) return(0x00);
cat_b(&b,sepr,cw,argp,(void*)0x00);
return(b);
}
