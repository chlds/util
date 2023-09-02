# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_r(signed(arg),signed char(*argp))) {
auto signed r;
if(arg<(0x00)) return(~0x00);
r = cvat_rr(arg,argp);
if(0x01+(r)) return(r);
--arg;
return(cvat_r(arg,argp));
}
