/* **** Notes

Count rows for words wrapped in the width.

Remarks:
Refer at fn. cv_ww.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_ww(signed short(arg),signed char(*sym),signed char(*argp))) {

auto signed i,r;

if(arg<(0x01)) return(0x00);
if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = wrap_words(arg,sym,argp);
if(!r) return(0x00);

argp = (r+(argp));

return(0x01+(ct_ww(arg,sym,argp)));
}
