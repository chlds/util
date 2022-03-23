/* **** Notes

Convert.

Remarks:
Call fn. rl_vw later.
Based on UTF-16 and UTF-8
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cv_wb_v(signed short(***di),signed char(**si))) {

auto signed short **w;
auto signed r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

r = ct_vb(si);
if(!r) return(0x00);

r++;
r = (r*(sizeof(*w)));
w = (signed short(**)) alloc(r);
if(!w) return(0x00);

AND(flag,0x00);
r = cv_wb_v_r(w,si);
if(!r) OR(flag,0x01);
if(r^(ct_vb(si))) OR(flag,0x02);
if(flag) {
printf("%s \n","<< Error at fn. cv_wb_v_r()");
AND(r,0x00);
rl_vw(&w);
}

*di = (w);
w = (0x00);

return(r);
}
