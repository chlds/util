# define CAR_H
# include "./../../../config.h"

pg_t *(__cdecl catlxe_r(signed char(**argp),signed short(flag))) {
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
p = (0x00);
r = (0x01*(sizeof(*p)));
p = (pg_t *)(alloc(r));
if(!p) return(p);
if(!(initpg(0x00,p))) {
rl(p);
p = (0x00);
}
return(catlxe_rr(p,argp,flag));
}
