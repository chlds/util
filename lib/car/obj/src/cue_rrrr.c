# define CAR_H
# include "./../../../config.h"

signed(__cdecl cue_rrrr(signed char(**sym),signed char(*argp))) {
auto signed r;
auto signed mb = (0x03);
auto signed(__cdecl**ff)(signed char(**sym),signed char(*argp));
auto signed(__cdecl*f)(signed char(**sym),signed char(*argp));
auto signed(__cdecl*(fn[]))(signed char(**sym),signed char(*argp)) = {
cuemb,
cuell,
0x00,
};
ff = (fn);
r = ct_a(argp);
if(!r) return(0x00);
if(r<(mb)) ff++;
f = (*ff);
if(!f) return(0x00);
return(f(sym,argp));
}
