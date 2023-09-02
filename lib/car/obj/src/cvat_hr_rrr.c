# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_hr_rrr(signed char **argp)) {
auto signed char *b;
auto signed r;
auto signed hrs = (24);
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(~0x00);
if(!(cf_no(b))) return(~0x00);
if(!(cv_da_first(0x0A,&r,b))) return(~0x00);
if(!(0x00<(r))) r = (0x01+(~r));
if(!(r<(hrs))) r = (r%(hrs));
if(cf_meridiem(b)) return(convhr(convmer(r,b)));
argp++;
return(cvat_hr_rrr_r(r,argp));
}
