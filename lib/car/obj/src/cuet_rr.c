# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuet_rr(signed char(**sym),signed char(*argp))) {
auto signed r;
r = cuesp(argp);
if(r) return(r);
return(cue_rrr(sym,argp));
}
