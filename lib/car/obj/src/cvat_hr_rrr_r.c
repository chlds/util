# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_hr_rrr_r(signed(arg),signed char(**argp))) {
auto signed char *b;
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(~0x00);
if(cf_meridiem(b)) return(convhr(convmer(arg,b)));
argp++;
return(cvat_hr_rrr_rr(arg,argp));
}
