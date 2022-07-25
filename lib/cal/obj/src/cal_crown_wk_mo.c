/* **** Notes

Convert into seconds of a first day of the first week

Remarks:
Return (~0x00) on failure
*/


# define CAL_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_wk_mo(signed short(wk),time_t(*argp))) {
auto struct tm *tp;
auto signed r;
auto signed short mo;
auto time_t t;
auto signed short sun = (0x00);
auto signed short mon = (0x01);
auto signed short sat = (0x06);
if(!argp) return(~0x00);
if(sat<(wk)) wk = (mon);
if(wk<(sun)) wk = (mon);
t = (*argp);
tp = localtime(&t);
if(!tp) return(~0x00);
mo = (R(tm_mon,*tp));
r = cal_crown_wk_mo_r(wk,mo,&t);
if(EQ(r,~0x00)) return(r);
if(EQ(t,~0x00)) return(~0x00);
*argp = (t);
return(r);
}
