# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvmo_txt_rr(signed char(***di),signed char(*si))) {
auto signed char ***d;
auto signed char **w;
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
b = (si);
d = (di);
w = (*d);
if(!w) return(0x00);
r = ords(w,b);
if(r<(ct_v(w))) return(r);
di++;
return(cvmo_txt_rr(di,si));
}
