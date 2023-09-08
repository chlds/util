# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_r(signed(arg),signed char(*argp))) {
auto signed r;
if(arg<(0x00)) return(0x00);
r = cvdt_rr(arg,argp);
if(r) return(r);
--arg;
return(cvdt_r(arg,argp));
}
