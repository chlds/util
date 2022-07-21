/* **** Notes

Map difference with the Greenwich Mean time

Remarks:
Call fn. rl later
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_map_diff_b(signed char(**di),time_t(*si))) {
auto signed char *b;
auto time_t t;
auto signed r;
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
t = (0x00);
r = cal_diff_gmt(&t,si);
if(!r) return(0x00);
b = (0x00);
r = cal_map_diff_b_r(&b,&t);
if(!r) {
embed(0x00,b);
rl(b);
b = (0x00);
}
*di = (b);
b = (0x00);
return(r);
}
