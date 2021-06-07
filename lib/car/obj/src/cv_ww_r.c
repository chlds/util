/* **** Notes

Convert into an array of pointers for words-wrap arrays.

Remarks:
Refer at fn. cv_ww.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ww_r(signed short(arg),signed char(**di),signed char(*sym),signed char(*si))) {

auto signed char *b;
auto signed i,r;

if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(!sym) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = wrap_words(arg,sym,si);
if(!r) return(0x00);

i = (r);
r++;
r = (r*(sizeof(**di)));
b = (signed char(*)) alloc(r);
*di = (b);
if(!b) return(0x00);

*b = (0x00);
if(!(ncpy(b,si,i))) return(0x00);
b = (0x00);

di++;
*di = (0x00);

return(0x01+(cv_ww_r(arg,di,sym,i+(si))));
}
