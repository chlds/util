# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_mn_rrr(signed char **argp)) {
auto signed char *b;
auto signed r;
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(~0x00);
if(!(cf_no(b))) return(~0x00);
argp++;
return(cvat_mn_rrrr(argp));
}
