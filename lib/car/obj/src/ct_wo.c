/* **** Notes

Count words.

Remarks:
Refer at fn. cv_wo.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_wo(signed char(*sym),signed char(*argp))) {

auto signed i,r;

// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = cue(sym,argp);
if(!r) return(0x00);

argp = (r+(argp));

return(0x01+(ct_wo(sym,argp)));
}
