# define CAR_H
# include "./../../../config.h"

signed(__cdecl cue_rrr(signed char(**sym),signed char(*argp))) {
auto signed r;
r = cuesy(sym,argp);
if(r) return(r);
return(cue_rrrr(sym,argp));
}
