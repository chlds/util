# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl map_week_number_xe_rr(signed char(*cw),signed char(*argp),time_t(*criterion))) {
auto signed char *b;
auto signed r;
auto signed digit = (0x00);
auto signed epoch = (1900);
auto signed char sp[] = (" ");
auto signed char hypn[] = {
0xE2,0x82,0x8B,0x00,
};
auto signed char week[] = {
0xE1,0xB4,0xA1,0x00,
};
if(!cw) return(0x00);
if(!argp) return(0x00);
if(!criterion) return(0x00);
b = (0x00);
r = (epoch+(current_yr_b(DBG,criterion)));
if(r<(epoch)) return(b);
b = cv(digit,r);
if(!b) return(b);
cat_b(&b,hypn,week,cw,sp,argp,(void*)(0x00));
return(b);
}
