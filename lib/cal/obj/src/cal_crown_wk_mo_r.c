/* **** Notes

Convert into seconds of a first day of the first week
*/


# define CAL_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_wk_mo_r(signed short(wk),signed short(mo),time_t(*argp))) {
auto struct tm *tp;
auto signed r;
auto time_t t;
auto signed short days = (0x07);
auto signed short dec = (0x0B);
auto signed short jan = (0x00);
if(mo<(jan)) return(~0x00);
if(dec<(mo)) return(~0x00);
if(!argp) return(~0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) {
*argp = (~0x00);
return(0x00);
}
if(mo^(R(tm_mon,*tp))) {
*argp = (t+(days*(24*(60*(60)))));
return(0x00);
}
// search back
r = elapse_days(wk,t);
if(EQ(r,~0x00)) {
r = cal_crown_wk_periodic(0x01,wk,argp);
if(!(EQ(r,~0x00))) return(0x00);
else {
*argp = (~0x00);
return(0x00);
}}
if(!r) r = (days);
ADD(t,0x01+(~(r*(24*(60*(60))))));
*argp = (t);
return(0x01+(cal_crown_wk_mo_r(wk,mo,argp)));
}
