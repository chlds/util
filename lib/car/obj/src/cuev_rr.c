# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuev_rr(signed char(**sym),signed char(*argp))) {
auto signed r;
r = cuesp(argp);
if(r) return(r);
r = cue_rrr(sym,argp);
argp = (r+(argp));
return(r+(cuesp(argp)));
}
