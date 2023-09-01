# define CAR_H
# include "./../../../config.h"

signed(__cdecl cfmmer_r(signed char **argp)) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
b = (*argp);
if(!b) return(0x00);
r = cf_meridiem(b);
if(r) return(r);
argp++;
return(cfmmer_r(argp));
}
