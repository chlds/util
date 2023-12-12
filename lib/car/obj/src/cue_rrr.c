# define CAR_H
# include "./../../../config.h"

signed(__cdecl cue_rrr(signed char(**sym),signed char(*argp),signed(__cdecl*f)(signed char(*argp)))) {
auto signed r;
if(f) {
r = f(argp);
if(r) return(r);
}
return(cue_rrrr(sym,argp));
}
