# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_hr_rr_r(signed char **argp)) {
auto signed char *b;
auto signed r;
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(~0x00);
r = cvhr_noon(b);
if(0x01+(r)) return(r);
return(cvat_hr_rr_rr(argp));
}
