# define CAR_H
# include "./../../../config.h"

signed(__cdecl unbindpg_r(pg_t(*argp))) {
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
p = (argp);
r = relpg(p);
p = (*(CLIH_DIFF+(R(p,*p))));
if(p) return(0x00);
return(r);
}
