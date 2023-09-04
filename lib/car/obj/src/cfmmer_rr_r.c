# define CAR_H
# include "./../../../config.h"

signed(__cdecl cfmmer_rr_r(signed char **argp)) {
auto signed char *b;
auto signed r;
auto signed char *(sym[]) = {
"M",
"m",
0x00,
};
if(!argp) return(0x00);
b = (*argp);
if(!b) return(0x00);
r = ords(sym,b);
if(!(r<(ct_v(sym)))) return(0x00);
argp++;
return(cfmmer_period(argp,cfmmer_rr_rr));
}
