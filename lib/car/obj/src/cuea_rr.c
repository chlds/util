# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuea_rr(signed char(**sym),signed char(*argp))) {
auto signed r;
r = cuesp(argp);
if(r) return(r);
r = cue_rrr(sym,argp,cueno);
argp = (r+(argp));
return(r+(cuesp(argp)));
}
