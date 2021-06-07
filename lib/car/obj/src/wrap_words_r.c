/* **** Notes

Count bytes of words wrapped in the width.

Remarks:
Refer at fn. cv_ww.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl wrap_words_r(signed short(arg),signed(*cache),signed char(*sym),signed char(*argp))) {

auto signed i,r;

if(arg<(0x01)) return(0x00);
if(!cache) return(0x00);
if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = cue(sym,argp);
if(!r) return(0x00);

argp = (r+(argp));
*cache = (r+(*cache));
if(arg<(*cache)) return(0x00);

return(r+(wrap_words_r(arg,cache,sym,argp)));
}
