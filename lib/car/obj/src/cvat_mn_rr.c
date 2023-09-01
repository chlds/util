# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_mn_rr(signed char **argp)) {
auto signed char *b;
auto signed r;
auto signed char sym[] = ("at");
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(~0x00);
if(!(cmpa_b(sym,b))) return(cvat_mn_rrr(++argp));
argp++;
return(cvat_mn_rr(argp));
}
