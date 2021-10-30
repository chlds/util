/* **** Notes

Convert into an array of pointers.

Remarks:
Call fn. rl_v later.
A character string should be terminated with the null character.
Refer at fn. read_b and fn. rm_crlf to replace CR/LF with the null character.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_wo(signed char(***di),signed char(*sym),signed char(*si))) {

auto signed char **v;
auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);
// if(!sym) return(0x00);
if(!si) return(0x00);
// if(!(*si)) return(0x00);

r = ct_wo(sym,si);
if(!r) return(0x00);

r++;
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
*di = (v);
if(!v) return(0x00);

*v = (0x00);
flag = (~0x00);
r = cv_wo_r(v,&flag,sym,si);
if(flag) {
AND(r,0x00);
rl_v(&v);
*di = (0x00);
}

return(r);
}
