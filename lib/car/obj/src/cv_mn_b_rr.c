# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_mn_b_rr(signed char(**di),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(~0x00);
if(!si) return(~0x00);
if(!(*si)) return(~0x00);
if(!(*di)) return(~0x00);
r = cv_mn_b_rrr(di,si);
if(~r) return(r);
di++;
return(cv_mn_b_rr(di,si));
}
