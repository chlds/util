/* **** Notes

Return the calendar week
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ct_wk_sat(time_t(*argp))) {
auto struct tm *tp;
auto time_t t;
auto signed r;
auto signed short mo;
auto signed short di;
auto signed short wk;
auto signed dec = (0x0B);
auto signed jan = (0x00);
if(!argp) return(0x00);
AND(wk,0x00);
OR(wk,0x06);
r = ctdn_wk(wk,*argp);
if(EQ(r,~0x00)) return(0x00);
t = (0x01+(~(r*(24*(60*(60))))));
t = (t+(*argp));
tp = localtime(&t);
if(!tp) return(0x00);
di = (R(tm_mday,*tp));
mo = (R(tm_mon,*tp));
if(EQ(jan,mo)) {
if(!(0x01<(di))) return(0x01);
}
if(EQ(dec,mo)) {
if(25<(di)) return(0x01);
}
return(ct_wk_sat_r(t));
}
