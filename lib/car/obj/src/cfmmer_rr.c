# define CAR_H
# include "./../../../config.h"

signed(__cdecl cfmmer_rr(signed char **argp)) {
auto signed char *b;
auto signed r;
auto signed char *(sym[]) = {
"A",
"P",
"a",
"p",
0x00,
};
if(!argp) return(0x00);
b = (*argp);
if(!b) return(0x00);
r = ords(sym,b);
if(!(r<(ct_v(sym)))) return(0x00);
argp++;
if(!(cfmmer_period(argp,cfmmer_rr_r))) return(0x00);
r = (0x01+(r%(0x02)));
return(r);
}
