/* **** Notes

Count words

Remarks:
Refer at fn. cv_va
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_va(signed char(*sym),signed char(*argp))) {
auto signed r;
// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cue_va(sym,argp);
if(!r) return(0x00);
argp = (r+(argp));
return(0x01+(ct_va(sym,argp)));
}
