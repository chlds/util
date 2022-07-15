/* **** Notes

Convert into an array of pointers for words-wrap arrays

Remarks:
Call fn. rl_v later
A character string should be terminated with the null character
Refer at fn. read_b and fn. rm_crlf to replace CR/LF with the null character
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_ww(signed short(arg),signed char(***di),signed char(*sym),signed char(*si))) {
auto signed char **v;
auto signed r;
auto signed short flag;
if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(*di) return(0x00);
// if(!sym) return(0x00);
if(!si) return(0x00);
// if(!(*si)) return(0x00);
r = ct_ww(arg,sym,si);
if(!r) return(0x00);
r++;
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
*di = (v);
if(!v) return(0x00);
*v = (0x00);
flag = (~0x00);
r = cv_ww_r(arg,v,&flag,sym,si);
if(flag) {
AND(r,0x00);
rl_v(&v);
*di = (0x00);
}
return(r);
}
