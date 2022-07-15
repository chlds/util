/* **** Notes

Count rows for words wrapped in the width
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_ww_r(signed short(arg),signed char(*sym),signed char(*argp))) {
auto signed r;
if(arg<(0x01)) return(0x00);
// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = wrap_words(arg,sym,argp);
if(!r) return(0x00);
argp = (r+(argp));
return(0x01+(ct_ww_r(arg,sym,argp)));
}
