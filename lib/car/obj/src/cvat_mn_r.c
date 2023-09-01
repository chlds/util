# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_mn_r(signed char **argp)) {
auto signed r;
if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);
r = cvat_mn_rr(argp);
if(0x01+(r)) return(r);
argp++;
return(cvat_mn_r(argp));
}
