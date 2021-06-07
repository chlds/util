/* **** Notes

Convert into an array of pointers for words-wrap arrays.

Remarks:
Call fn. rl_v later.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ww(signed short(arg),signed char(***di),signed char(*sym),signed char(*si))) {

auto signed char **v;
auto signed char *b;
auto signed i,r;

if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(*di) return(0x00);
if(!sym) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = ct_ww(arg,sym,si);
if(!r) return(0x00);

r++;
r = (r*(sizeof(**di)));
v = (signed char(**)) alloc(r);
*di = (v);
if(!v) return(0x00);

*v = (0x00);

return(cv_ww_r(arg,*di,sym,si));
}
