# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_rr(signed char **argp)) {
auto signed char *b;
auto signed char sym[] = ("at");
if(!argp) return(~0x00);
b = (*argp);
if(!b) return(~0x00);
if(!(cmpa_b(sym,b))) return(cvtd_vec_extra(++argp,cvtd_vec_rr_r));
argp++;
return(cvtd_vec_rr(argp));
}
