# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_at_b_r(signed short(*hr),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!hr) return(0x00);
if(!argp) return(0x00);
AND(r,0x00);
AND(*hr,r);
b = (argp);
r = cv_hr_b(b);
OR(*hr,r);
if(~r) return(0x01);
return(cv_at_b_rr(hr,argp));
}
