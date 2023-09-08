# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_rr(signed char **argp)) {
auto signed char *b;
auto signed r;
auto signed char sym[] = ("on");
if(!argp) return(0x00);
AND(r,0x00);
b = (*argp);
if(!b) return(0x00);
if(!(cmpa_b(sym,b))) return(cvdt_vec_extra(r,++argp,cvdt_vec_rrr));
argp++;
return(cvdt_vec_rr(argp));
}
