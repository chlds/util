# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_at_b(signed short(*hr),signed short(*mn),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!hr) return(0x00);
if(!mn) return(0x00);
if(!argp) return(0x00);
AND(r,0x00);
AND(*mn,r);
b = (argp);
r = cv_mn_b(b);
if(~r) OR(*mn,r);
return(cv_at_b_r(hr,argp));
}
