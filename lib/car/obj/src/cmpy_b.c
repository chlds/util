/*

Compare
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpy_b(signed char(*di),signed char(*si))) {
auto signed char *b;
auto signed r;
auto signed(__cdecl**ff)(signed char(*di),signed char(*si));
auto signed(__cdecl*f)(signed char(*di),signed char(*si));
auto signed(__cdecl*(fn[]))(signed char(*di),signed char(*si)) = {
cmpy_b_rr,
cmpy_b_r,
0x00,
};
if(!di) return(0x00);
if(!si) return(0x00);
ff = (fn);
b = (di);
r = ct(b);
if(r<(ct(si))) {
b = (si);
ff++;
}
f = (*ff);
if(!f) return(0x00);
r = f(di,si);
r = (r%(ct(b)));
return(r);
}
