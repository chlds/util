/* **** Notes

Store bytes.

Remarks:
Based on UTF-16 and UTF-8
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_jd_r(signed(arg/* code of line break */),signed char(*di/* path */),signed char(**si))) {

auto signed short *w;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);

w = (0x00);
if(!(cv_wb(&w,di))) {
printf("%s \n","<< Error at fn. cv_wb()");
return(0x00);
}

r = jd_w(arg,w,si);
if(!r) printf("%s \n","<< Error at fn. jd_w()");

embed_w(0x00,w);
rl(w);
w = (0x00);

return(r);
}
