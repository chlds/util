/* **** Notes

Convert into a table pointer of pointers secured for bytes in UTF-8

Remarks:
Call fn. rl_v later to release secured buffers at **di and at their contents
Based on UTF-16 and UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cv_bw_v(signed char(***di),signed short(**si))) {
auto signed char **b;
auto signed r;
auto signed short flag;
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
r = ct_vw(si);
if(!r) return(0x00);
r++;
r = (r*(sizeof(*b)));
b = (signed char(**)) alloc(r);
if(!b) return(0x00);
AND(flag,0x00);
r = cv_bw_v_r(b,si);
if(!r) OR(flag,0x01);
if(r^(ct_vw(si))) OR(flag,0x02);
if(flag) {
printf("%s \n","<< Error at fn. cv_bw_v_r()");
AND(r,0x00);
rl_v(&b);
}
*di = (b);
b = (0x00);
return(r);
}
