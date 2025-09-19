# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cath_rr(signed char(*args),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(args);
if(!(*argp)) return(args);
b = (*argp);
r = cnt(b,args,(void*)(0x00));
b = (signed char*)(alloc(++r*(sizeof(*b))));
if(!b) return(args);
cy(*argp,cy(args,b));
embed(0x00,args);
rl(args);
args = (b);
b = (0x00);
argp++;
return(cath_rr(args,argp));
}
