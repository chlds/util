# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_hr_b_rrrrr(signed char(*di),signed char(*si))) {
auto signed char *b;
auto signed r;
auto signed short flag;
if(!di) return(~0x00);
if(!si) return(~0x00);
AND(flag,0x00);
b = (si);
r = ctdn_a(di,b);
if(r<(0x01)) return(~0x00);
b = (r+(b));
if(cv_hr_b_rrrrr_r(b)) OR(flag,0x01);
embed(0x00,b);
r = cv_hr_b_rrrrrr(di,si);
if(~r) {
if(flag) r = (12+(r%(12)));
return(r);
}
return(cv_hr_b_rrrrr(di,si));
}
