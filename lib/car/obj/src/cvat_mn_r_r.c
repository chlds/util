# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_mn_r_r(signed(arg),signed char(**argp))) {
auto signed char *b;
if(!argp) return(arg);
b = (*argp);
if(!b) return(arg);
if(cf_meridiem(b)) return(convhm_mer(arg,b));
argp++;
return(cvat_mn_r_rr(arg,argp));
}
