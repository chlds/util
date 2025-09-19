# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl catn_rr(signed char(*args),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(args);
if(!(*argp)) return(args);
b = (*argp);
r = cnt(b,args,(void*)(0x00));
b = (signed char*)(alloc(++r*(sizeof(*b))));
if(!b) return(args);
cy(args,cy(*argp,b));
embed(0x00,args);
rl(args);
args = (b);
b = (0x00);
argp++;
return(catn_rr(args,argp));
}
