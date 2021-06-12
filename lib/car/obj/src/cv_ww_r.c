/* **** Notes

Convert into an array of pointers for words-wrap arrays.

Remarks:
Refer at fn. cv_ww.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ww_r(signed short(arg),signed char(**di),signed short(*flag),signed char(*sym),signed char(*si))) {

auto signed char *b;
auto signed i,r;

if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(!flag) return(0x00);
// if(!sym) return(0x00);
if(!si) return(0x00);
// if(!(*si)) return(0x00);

*di = (0x00);
if(!(*flag)) return(0x00);

r = wrap_words(arg,sym,si);
i = (r);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
*di = (b);
if(!b) return(0x00);

*b = (0x00);
r = ncpy(b,si,i);
b = (0x00);
if(i^(r)) return(0x00);

di++;
si = (r+(si));
if(!(*si)) AND(*flag,0x00);

return(0x01+(cv_ww_r(arg,di,flag,sym,si)));
}
