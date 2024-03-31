# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl catmm_rr(signed char(*args),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(args);
if(!(*argp)) return(args);
b = (*argp);
r = cnt(b,args,(void*)(0x00));
r++;
r = (r*(sizeof(*b)));
b = (signed char *)(alloc(r));
if(!b) return(args);
*b = (0x00);
if(!(cy(args,cy(*argp,b)))) AND(r,0x00);
argp++;
embed(0x00,args);
rl(args);
args = (b);
b = (0x00);
if(!r) return(args);
return(catmm_rr(args,argp));
}
